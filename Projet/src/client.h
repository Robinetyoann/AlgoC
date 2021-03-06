/*
 * SPDX-FileCopyrightText: 2020 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef __CLIENT_H__
#define __CLIENT_H__

/*
 * port d'ordinateur pour envoyer et recevoir des messages
 */

#define PORT 8089

/*
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */

int envoie_recois_message(int socketfd, char *data);
int envoie_message(int socketfd, char *data);
int envoie_nom_de_client(int socketfd, char *data);
int envoie_operateur_numeros(int socketfd, char *data);
int envoie_couleurs(int socketfd, char *data, char *pathname);
int envoie_balises(int socketfd, char *data);
int iscouleurs(char *couleur);
int isbalises(char *balise);
int read_input(char *data, int (*test)(char *));

#endif
