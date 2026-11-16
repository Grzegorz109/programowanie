

const btnData = document.getElementById("btn-data");
const komunikatData = document.getElementById("komunikat-data");

const btnLicznik = document.getElementById("btn-licznik");
const komunikatLicznik = document.getElementById("komunikat-licznik");

const formularz = document.getElementById("formularz-zapisow");

const imieNazwiskoInput = document.getElementById("imie-nazwisko");
const emailInput = document.getElementById("email");
const turniejSelect = document.getElementById("turniej");
const wiekInput = document.getElementById("wiek");
const zgodaCheckbox = document.getElementById("zgoda");

const komunikatFormularz = document.getElementById("komunikat-formularza");
const daneUczestnika = document.getElementById("dane-uczestnika");

// WYŚWIETLANIE DATY

function pokazDate() {
    komunikatData.textContent =
        "Festiwal odbędzie się 24 października 2026 r.";
}

// LICZNIK DNI

function obliczDniDoFestiwalu() {
    const dzisiaj = new Date();

    const dataFestiwalu = new Date(2026, 9, 24);

    const startDzis = new Date(
        dzisiaj.getFullYear(),
        dzisiaj.getMonth(),
        dzisiaj.getDate()
    );

    const roznicaMs = dataFestiwalu - startDzis;

    const dni = Math.ceil(
        roznicaMs / (1000 * 60 * 60 * 24)
    );

    if (dni > 0) {
        komunikatLicznik.textContent =
            "Do rozpoczęcia festiwalu pozostało: " + dni + " dni.";
    } else if (dni === 0) {
        komunikatLicznik.textContent =
            "Festiwal odbywa się dzisiaj!";
    } else {
        komunikatLicznik.textContent =
            "Festiwal już się odbył.";
    }
}

// OBSŁUGA FORMULARZA

function sprawdzFormularz(event) {
    event.preventDefault();

    const imieNazwisko = imieNazwiskoInput.value.trim();
    const email = emailInput.value.trim();
    const turniej = turniejSelect.value;
    const wiek = wiekInput.value.trim();
    const zgoda = zgodaCheckbox.checked;

    if (
        imieNazwisko === "" ||
        email === "" ||
        turniej === "" ||
        wiek === "" ||
        !zgoda
    ) {
        komunikatFormularz.textContent =
            "Uzupełnij wszystkie wymagane pola.";

        daneUczestnika.textContent = "";
        return;
    }

    komunikatFormularz.textContent =
        "Zapis zakończony pomyślnie! Do zobaczenia na festiwalu.";

    daneUczestnika.textContent =
        "Uczestnik: " + imieNazwisko +
        "\nTurniej: " + turniej +
        "\nWiek: " + wiek;
}

// ZDARZENIA

if (btnData) {
    btnData.addEventListener("click", pokazDate);
}

if (btnLicznik) {
    btnLicznik.addEventListener("click", obliczDniDoFestiwalu);
}

if (formularz) {
    formularz.addEventListener("submit", sprawdzFormularz);
}
