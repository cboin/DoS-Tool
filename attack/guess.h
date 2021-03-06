#ifndef _GUESS_H
#define _GUESS_H
#include <stdlib.h>
#include <string.h>

#define CheckModel 0
#define CheckLength 1

char *FEIXUN_FWR_604H_REQUEST = "POST /goform/formLogin HTTP/1.1\r\n"
                                "Host: %s\r\n"
                                "User-Agent: Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:64.0) Gecko/20100101 Firefox/64.0\r\n"
                                "Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8\r\n"
                                "Accept-Language: en-US,en;q=0.5\r\n"
                                "Accept-Encoding: gzip, deflate\r\n"
                                "Referer: %s\r\n"
                                "Content-Type: application/x-www-form-urlencoded\r\n"
                                "Content-Length: %ld\r\n"
                                "Connection: close\r\n"
                                "Upgrade-Insecure-Requests: 1\r\n\r\n"
                                "%s";
char *FEIXUN_FWR_604H_REQUEST_DATA = "Language=Chinese&Language_set=Chinese&username=%s&password=%s&submit=%%E7%%99%%BB%%E5%%BD%%95";
char *FEIXUN_FWR_604H_SUCCESS = "quick_setup1.asp";

typedef struct match_output
{
    char *request;
    char *request_data;
    char *success_or_not;
    struct match_output *next;
} MatchOutput, *pMatchOutput;

#endif