#ifndef YTDL_H
#define YTDL_H

struct ytdl_playlist;

int ytdl_add(char name[], char url[], char dl_location[]);

int ytdl_list(char *rtn[]);

int ytdl_info(char name[], struct ytdl_playlist *rtn);

int ytdl_rm(char name[]);

int ytdl_uncache(char name[]);

int ytdl_update(char name[]);

#endif