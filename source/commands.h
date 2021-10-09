/**
 * @file commands.h
 * @author Jan Kubice
 * @brief 
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef COMMANDS_H
#define COMMANDS_H

#include <stdio.h>

enum result {OK = 0, FILE_NOT_FOUND = 1, PATH_NOT_FOUND = 2, EXIST = 3, NOT_EMPTY = 4, CANNOT_CREATE_FILE = 5};

/**
 * @brief Zkopíruje soubor path_1 do umístění path_2
 * 
 * @param path_1 Cesta k prvnímu souboru
 * @param path_2 Cesta k druhému souboru
 * @return int 
 * 0 - OK
 * 1 - File not found (zdroj)
 * 2 - path nout found (cíl)
 */
int cp(char path_1[], char path_2[]);

/**
 * @brief Přesune soubor path_1 do umístění path_2, nebo přejmenuje path_1 na path_2
 * 
 * @param path_1 Cesta k prvnímu souboru
 * @param path_2 Ceta k druhému souboru a nebo nový název
 * @return int 
 * 0 - OK
 * 1 - File not found (zdroj)
 * 2 - Path not found (cíl)
 */
int mv(char path_1[], char path_2[]);

/**
 * @brief Smaže soubor path
 * 
 * @param path Cesta k souboru
 * @return int 
 * 0 - OK
 * 1 - File not found
 */
int rm(char path[]);

/**
 * @brief Vytvoří adresář path
 * 
 * @param path Cesta pro vytvoření nového adresáře
 * @return int  
 * 0 - OK
 * 2 - Path not found (zadaná cesta neexistuje)
 * 3 - Exist (zadané cesta již existuje)
 */
int mkdir(char path[]);

/**
 * @brief Smaže prázdný adresář path
 * 
 * @param path Cesta k adresáři
 * @return int 
 * 0 - OK
 * 1 - File not found (adresář neexistuje)
 * 4 - Not empty (adresář není prázdný a obsahuje buď soubory nebo podadresáře)
 */
int rmdir(char path[]);

/**
 * @brief Vypíše obsah adresáře. Pokud se vše zdaří vypíše obsah a vrátí 0.
 * Například: 
 * -FILE
 * +DIR
 * 
 * @param path Cesta k adresáři
 * @return int 
 * 0 - OK
 * 2 - Path not found
 */
int ls(char path[]);

/**
 * @brief Vypíše obsah souboru. Pokud se vše zdaří vypíše obsah souboru a vrátí 0.
 * 
 * @param path Cesta k souboru
 * @return int 
 * 0 - OK
 * 1 - File not found
 */
int cat(char path[]);

/**
 * @brief Změní aktuální cestu do adresáře path
 * 
 * @param path Cesta k adresáři
 * @return int 
 * 0 - OK
 * 2 - Path not found
 */
int cd(char path[]);

/**
 * @brief Vypíše aktuální cestu. Pokud se vše zdaří, vypíše cestu a vrátí 0.
 * 
 * @return int 
 * 0 - OK
 */
int pwd();

/**
 * @brief Vypíše informace o souboru/adresáři (v jakých clusterech se nachází)
 * Pokud se vše zdarí vypíše výpis ve formátu: NAME –SIZE –i-node NUMBER–přímé a nepřímé odkazy
 * a vrátí 0
 * 
 * @param path Cesta k souboru/adresáři
 * @return int 
 * 0 - OK
 * 1 - File not found
 */
int info(char path[]);

/**
 * @brief Nahraje soubor path_1 z pevného disku do umístění path_2 na simulovaném disku
 * 
 * @param path_1 Cesta k souboru na pevném disku
 * @param path_2 Cesta k uložení na simulovaném disku
 * @return int 
 * 0 - OK
 * 1 - File not found (zdroj)
 * 2 - Path not found (cíl) 
 */
int incp(char path_1[], char path_2[]);

/**
 * @brief Nahraje soubor path_1 ze simulovaného disku do umístění path_2 na pevném disku
 * 
 * @param path_1 
 * @param path_2 
 * @return int 
 * 0 - OK
 * 1 - File not found (zdroj)
 * 2 - Path not found (cíl) 
 */
int outcp(char path_1[], char path_2[]);

/**
 * @brief Načte soubor z pevného disku, ve kterém budou jednotlivé příkazy, a začneje sekvenčně vykonávat. Formát je 1 příkaz/1řádek
 * 
 * @param path Cesta k souboru
 * @return int 
 * 0 - OK
 * 1 - File not found 
 */
int load(char path[]);

/**
 * @brief Příkaz provede formát souboru, který byl zadán jako parametr při spuštení programu ¨
 * na souborový systém dané velikosti. Pokud už soubor nějaká data obsahoval, 
 * budou přemazána. Pokud soubor neexistoval, bude vytvořen.
 * 
 * @param size Velikost inicializované velikosti v MB
 * @return int 
 * 0 - OK
 * 5 - Cannot create file
 */
int format(int size);

/**
 * @brief Vytvoří soubor path_3, který bude spojením souborů path_1 a path_2
 * 
 * @param path_1 Cesta k souboru 1
 * @param path_2 Cesta k souboru 2
 * @param path_3 Cesta kam se uloží spojený soubor 3
 * @return int 
 * 0 - OK
 * 1 - File not found (jeden ze zdrojů)
 * 2 - Path not found (cíl)
 */
int xcp(char path_1[], char path_2[], char path_3[]);

/**
 * @brief Pokud je s1 větší než 5000 bytů, zkrátí jej na 5000 bytů
 * 
 * @param path Cesta k souboru
 * @return int 
 * 0 - OK
 * 1 - File not found
 */
int sht(char path[]);

/**
 * @brief Ukončí program
 */
void exit();

#endif