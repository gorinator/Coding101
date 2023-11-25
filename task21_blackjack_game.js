/*
Задача 21: Карточная игра "Двадцать одно"

Описание:
   Разработать игру "Двадцать одно"(или "Блэкджек") с учетом подсчета карт, а также определения победителя в зависимости от суммы очков.

*/

function getcard() { // Функция возвращающая рандомно карту от 2 до 11
    while (true) {
        let card = (Math.random() * 11) + 1;
        if (card >= 2 && card <= 11) {
            card = card.toFixed(0);
            return Number(card);
        }
    }
}

function compplay() { // Функция игры с компьютером
    let compsum = 0;
    while ((21 - compsum) > 6) { // По теории вероятности нет смысла рисковать с разницей больше чем в 6
        let newcard = getcard();
        compsum += newcard;
    }
    return compsum;
}

alert('-= BlackJack JS Game =-');
let userscore = 0;
let compscore = 0;
while (true) {
    let usersum = getcard();
    usersum += getcard(); // Эквивалент раздачи 2х карт пользователю

    while (true) {
        let userturn = confirm('Сумма ваших карт: ' + String(usersum) + '. Еще?');
        if (userturn) {
            usersum += getcard();
        } else {
            break;
        }
    }

    if (usersum == 21) {
        alert('Вы абсолютный победитель!');
    } else {
        let compsum = compplay();
        if ((usersum < 21 && usersum > compsum) || (compsum > 21 && usersum < 21)) {
            userscore++;
            alert('Вы выиграли!' + `
Сумма ваших очков: ` + String(usersum) + `
Сумма очков компьютера: ` + String(compsum));
        } else {
            compscore++;
            alert('Вы проиграли!' + `
Сумма ваших очков: ` + String(usersum) + `
Сумма очков компьютера: ` + String(compsum));
        }
    }

    let playmore = confirm('Счет: ' + String(userscore) + ' | ' + String(compscore) + `
Играем еще?`);
    if (!playmore) {
        break;
    }
}
