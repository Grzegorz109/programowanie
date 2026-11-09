var ciekawostki = [
    "Kielce są jedynym miastem w Europie, w którego granicach administracyjnych znajduje się aż 5 rezerwatów przyrody.",
    "W Rezerwacie Kadzielnia znajduje się podziemna trasa turystyczna łącząca trzy jaskinie: Odkrywców, Prochownię i Szczelinę na Kadzielni.",
    "Kielce nazywane są nieoficjalnie stolicą polskiego designu i mody ze względu na coroczne wydarzenia i targi branżowe."
];

var indeksCiekawostki = 0;

function sprawdzAtrakcje() {
    var selectElement = document.getElementById("atrakcja");
    var wynikContainer = document.getElementById("wynik-sprawdz");
    
    if (!selectElement || !wynikContainer) return;
    
    var wybrane = selectElement.value;
    var komunikat = "";

    if (wybrane === "Kadzielnia") {
        komunikat = "Kadzielnia – świetne miejsce na spacer i podziwianie wapiennych skał.";
    } else if (wybrane === "Pałac Biskupów Krakowskich") {
        komunikat = "Pałac Biskupów Krakowskich – barokowa perełka architektury z zachwycającym Ogrodem Włoskim.";
    } else if (wybrane === "Park Miejski") {
        komunikat = "Park Miejski – idealna przestrzeń do odpoczynku wśród zieleni i historycznych alejek.";
    } else if (wybrane === "Wzgórze Zamkowe") {
        komunikat = "Wzgórze Zamkowe – serce historyczne i kulturalne miasta z licznymi wystawami.";
    }

    wynikContainer.textContent = komunikat;
}

function obliczPozostaleAtrakcje() {
    var wszystkieCheckboxy = document.querySelectorAll(".chk-atrakcja");
    var wynikContainer = document.getElementById("wynik-licznik");
    
    if (!wynikContainer) return;

    var lacznaLiczba = wszystkieCheckboxy.length;
    var zaznaczoneLiczba = 0;

    for (var i = 0; i < lacznaLiczba; i++) {
        if (wszystkieCheckboxy[i].checked) {
            zaznaczoneLiczba++;
        }
    }

    var pozostalo = lacznaLiczba - zaznaczoneLiczba;

    if (pozostalo === 0) {
        wynikContainer.textContent = "Gratulacje! Znasz już wszystkie atrakcje z naszej listy.";
    } else {
        wynikContainer.textContent = "Pozostało Ci do odwiedzenia: " + pozostalo + " atrakcje.";
    }
}

function pokazKolejnaCiekawostke() {
    var wynikContainer = document.getElementById("wynik-ciekawostka");
    
    if (!wynikContainer) return;

    if (indeksCiekawostki >= ciekawostki.length) {
        indeksCiekawostki = 0;
    }

    wynikContainer.textContent = ciekawostki[indeksCiekawostki];
    indeksCiekawostki++;
}

document.addEventListener("DOMContentLoaded", function () {
    var btnSprawdz = document.getElementById("btn-sprawdz");
    var btnLicznik = document.getElementById("btn-licznik");
    var btnCiekawostka = document.getElementById("btn-ciekawostka");

    if (btnSprawdz) {
        btnSprawdz.addEventListener("click", sprawdzAtrakcje);
    }
    if (btnLicznik) {
        btnLicznik.addEventListener("click", obliczPozostaleAtrakcje);
    }
    if (btnCiekawostka) {
        btnCiekawostka.addEventListener("click", pokazKolejnaCiekawostke);
    }
});