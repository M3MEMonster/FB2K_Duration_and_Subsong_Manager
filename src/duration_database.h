#pragma once
#include "stdafx.h"


namespace duration_db {
    struct song_item {
        pfc::string8 hash_key;
        pfc::string8 file_path;
        pfc::string8 file_name;
        pfc::string8 track_title;
        uint32_t subsong = 0;
        double original_duration = 0;
        double custom_duration = 0;
    };

    pfc::string8 content_hasher(const char* path, uint32_t subsong);
    void save();
    void load();
    void refresh_metadb(metadb_hint_list_v3::ptr& hints, const song_item* item, char mode);
}


