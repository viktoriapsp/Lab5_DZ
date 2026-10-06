# Домашнее задание к работе 5

## Условие задачи

Написать программу вычисления значения функции двух переменных. <img width="874" height="76" alt="image" src="https://github.com/user-attachments/assets/872cfc12-36bf-4271-968e-a90231f38713" />


## Алгоритм и блок-схема

### Алгоритм

  1. Начало
  2. Ввести значение переменных `x` и `y`.
  3. Вычислить значение функции `f`
  4. Вывод результата
  5. Конец

### Блок-схема
<img width="477" height="552" alt="Диаграмма без названия drawio" src="https://github.com/user-attachments/assets/2799bfd8-210e-4def-aa44-f162a38e5a23" />

[Ссылка на блок-схему] (https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio.png&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22nCcbae3hB7-9NBZsQFav%22%3E1Vhdb5swFP01qNukTsYQSB5Dmm7TVmlSVG19mrxgPjaDqXEasl%2B%2FizEh5KuhIlKSB8ccX47N8blg27AmSfFJkCx64D5lBkZ%2BYVh3BsYmshD8lciqQgbOsAJCEfs6qAFm8T9a36nRRezTvBUoOWcyztrgnKcpncsWRoTgy3ZYwFm714yEdAeYzQnbRX%2FEvowqdIjdBv9M4zCqezadUdWSkDpYP0keEZ8vNyBralgTwbmsakkxoawUr9aluu%2F%2BQOt6YIKm8pQbRrEoHn49JezRffK%2FPno%2Fc%2FfvrVWxUH9HhYZWQzlfiDk9wlXHyVUtXkk705dcyIiHPCVs2qCe4IvUp%2BUIEVw1Md84zwA0AfxDpVxpY5CF5ABFMmG6VVuCiJDKI2PDVdwLYQs9tvUMgHUpT6gUKwgQlBEZv7TFINpD4TqukRkqWukOqh8ReUM8xsDkpUjLKJZ0lhGl%2FhLyrC0BGCujX9IcEqUlyubDgryjO1Wishy7TX3kqXKqb6JC0mJjTLsaRRt%2Bd7W5l01umLbGNItVX%2Bs3wBCdSdVBj17GF%2Bxl%2B6K8jE%2FxsrIoVCGKMEYZDwVJ4IkzKmIYBhXbbd%2Bbhu72D%2BKC1p%2BSw%2BmgSq8qp6q0lWnxZPWmVHD2pMJwKxVwOxUwOlcuuD3mgn3BueBcVC7Yp%2BTCK3be80AOk2WuCNoicp4X5dLBC3gqbwOSxAxcNb6ZkHxO%2FJhA7ANP%2BU0dkSulx6OsvGfOGYfUGhvYQurX0EEtVLRAoPpBkJH1GPKMpHsHsUEYBL6L8C7hu5oEpK14dEfkd96F3x86ZN6Bvwu3SUZ2EJzOXVrLwF5J%2ByzkNatU9EH%2BvocpOCRMH9yHpvcwN%2FqgZvh8DgLd0a36IpT93HfsrauLyNqvGWxFzmsneIUi3EcfR2anUsy%2BXn9dd84BrL5KNfqGVdNwd9Vku4PWqsl08cdBa91knW3dZJo9LpycC1441ecrF7Jycq54F2EaQ2%2FvXiLobR%2FhbO0jrPY%2BwrbPlg%2FolInp%2FahirI8kmmOLgTq2cN6k6J53zGuKDgbdFYXL5jRPtW2ciVrT%2Fw%3D%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## Реализация программы

Программа написана на языке C

    #include <stdio.h>
    #include <locale.h>
    #include <math.h>

    int main()
    {
     setlocale(LC_ALL, "RUS");
     const double a = -10.0;
     double x, y,f;
     printf("Введите число x:");
     scanf("%lf", &x);
     printf("Введите число y:");
     scanf("%lf", &y);
     f = log(fabs((y + sqrt(fabs(x))) * (x - y / (a + pow(x, 2) / 4))));
     printf("Результат: %lf", f);
     return 0;
    }

## Результат работы программы

    Введите число x: 3
    Введите число y: 2
    Результат: 2.498091

    Введите число x: 1,5e-6
    Введите число y: -2
    Результат: -0.915686

## Информация о разработчике

    Имя: Страхова Виктория
    Группа: бИЦТ-261
    Вариант: 27
