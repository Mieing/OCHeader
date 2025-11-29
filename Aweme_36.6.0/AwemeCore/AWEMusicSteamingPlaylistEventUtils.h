@interface AWEMusicSteamingPlaylistEventUtils : NSObject

+ (void)reportEventChangePlaylistInfoWithEnterFrom:(id)a0 playlistId:(id)a1 options:(id)a2;
+ (void)reportEventPlaylistSettingWithEnterFrom:(id)a0 enterMethod:(id)a1 options:(id)a2;
+ (void)reportEventEnterAddSongWithEnterFrom:(id)a0 isEmpty:(id)a1 enterMethod:(id)a2 options:(id)a3;
+ (void)reportEventEnterPlaylistInfoWithEnterFrom:(id)a0 previousPage:(id)a1 enterMethod:(id)a2;
+ (void)reportMiniLunaEventClickCreatePlaylistEventModel:(id)a0;
+ (void)reportEventPlaylistFinshWithEnterFrom:(id)a0 enterMethod:(id)a1 queueName:(id)a2 privacy_set:(BOOL)a3 playlistID:(id)a4 previousPage:(id)a5 options:(id)a6 playlistActivityName:(id)a7;
+ (void)reportMiniLunaEventCreatePlaylistFinishWithPlaylistID:(id)a0 isPublic:(BOOL)a1 isSuccess:(BOOL)a2 errorCode:(long long)a3 isAuto:(BOOL)a4 eventModel:(id)a5;
+ (void)reportEventPlaylistCreateWithEnterFrom:(id)a0 queueName:(id)a1 enterMethod:(id)a2 previousPage:(id)a3 groupId:(id)a4 options:(id)a5;
+ (void)reportEventClickPlaylistWithEnterFrom:(id)a0 playlistID:(id)a1 type:(unsigned long long)a2;
+ (void)reportMiniLunaEventClickPlaylistWithPlaylistInfo:(id)a0 userID:(id)a1 rank:(long long)a2 eventModel:(id)a3;
+ (void)reportEventPlaylistDeleteWithStatus:(id)a0 playlistId:(id)a1 playlistType:(unsigned long long)a2 enterFrom:(id)a3;
+ (void)reportMiniLunaEventFavouritePlaylistWithIsCollect:(BOOL)a0 status:(BOOL)a1 errorCode:(long long)a2 playlistId:(id)a3 userID:(id)a4 eventModel:(id)a5;
+ (void)reportEventShowPlaylistWithEnterFrom:(id)a0 type:(unsigned long long)a1 playlistID:(id)a2;
+ (void)reportMiniLunaEventClickMediaInPlaylistWithPlaylistID:(id)a0 groupID:(id)a1 mediaType:(id)a2 rank:(long long)a3 eventModel:(id)a4;
+ (void)reportEventShowPlaylistListWithEnterFrom:(id)a0 enterMethod:(id)a1;
+ (void)reportShowDSPMoreWithMusicID:(id)a0 queueName:(id)a1 metaSongID:(id)a2;
+ (void)reportShowAddToPlayListWithMusicID:(id)a0 queueName:(id)a1 metaSongID:(id)a2 enterMethod:(id)a3;
+ (void)reportEventClickDSPMoreWithEnterFrom:(id)a0 queueName:(id)a1 musicID:(id)a2 metaSongID:(id)a3;
+ (void)reportEventAddSongtoPlaylistWithEnterFrom:(id)a0 queueName:(id)a1 musicID:(id)a2 metaSongID:(id)a3 enterMethod:(id)a4;
+ (void)reportEventSelectPlaylistWithId:(id)a0 trackParams:(id)a1 type:(unsigned long long)a2;
+ (void)reportEventPlaylistReorderWithStatus:(id)a0 playlistId:(id)a1 enterFrom:(id)a2;
+ (void)reportEventSongDeleteWithStatus:(id)a0 musicID:(id)a1 playlistId:(id)a2 enterFrom:(id)a3;
+ (void)reportEventPlaylistEditReturnClickWithPage:(id)a0 options:(id)a1;
+ (void)reportPlaylistSettingClickWithEnterFrom:(id)a0 clickArea:(id)a1 options:(id)a2;
+ (void)reportMiniLunaEventAddToPlaylistWithPlaylistID:(id)a0 groupID:(id)a1 status:(BOOL)a2 fromList:(id)a3 searchID:(id)a4 searchSessionID:(id)a5 eventModel:(id)a6;
+ (void)reportEventAddSongFinishSongNum:(long long)a0 enterMethod:(id)a1 isEmpty:(BOOL)a2 isCreate:(BOOL)a3 enterFrom:(id)a4 queueName:(id)a5 options:(id)a6;
+ (void)reportEventFavouritePlaylistWithIsCollect:(BOOL)a0 playlistType:(unsigned long long)a1 playlistId:(id)a2 previousPage:(id)a3 enterFrom:(id)a4;
+ (void)reportFeedResponseWithScene:(id)a0 responseLength:(unsigned long long)a1 responseFilteredLength:(unsigned long long)a2 requestCount:(unsigned long long)a3;
+ (id)transferFromType:(unsigned long long)a0;
+ (void)reportEventEnterPlaylistPlayAllWithEnterFrom:(id)a0 queueName:(id)a1 playlistId:(id)a2;
+ (id)getQueueNameWithOwnerId:(id)a0 secUserID:(id)a1 playlistType:(unsigned long long)a2;

@end
