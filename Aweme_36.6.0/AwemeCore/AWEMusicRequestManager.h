@interface AWEMusicRequestManager : NSObject

+ (id)dictionaryToJson:(id)a0;
+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)requestOpenPlatformShareIdWithSourceStyleId:(id)a0 trackId:(id)a1 completion:(id /* block */)a2;
+ (void)requestDiversionLunaSongInfoWithSongID:(id)a0 scene:(id)a1 infoType:(long long)a2 mediaType:(id)a3 completion:(id /* block */)a4;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)requestDirtyWordCheckWithContent:(id)a0 completion:(id /* block */)a1;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 responseBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
+ (void)requestLunaAnchorRecommendInfoWithMusicId:(id)a0 completion:(id /* block */)a1;
+ (void)requestLunaAnchorSearchInfoWithQuery:(id)a0 cursor:(id)a1 searchId:(id)a2 completion:(id /* block */)a3;
+ (void)deletePlaylistWithPlaylistIDs:(id)a0 completion:(id /* block */)a1;
+ (void)createPlaylistWithTitle:(id)a0 picUrl:(id)a1 des:(id)a2 privacySetting:(unsigned long long)a3 musicInfo:(id)a4 completion:(id /* block */)a5;
+ (void)requestLunaMusicAnchorInfo:(id)a0 completion:(id /* block */)a1;
+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 responseBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
+ (void)p_etReportNetPerformance:(id)a0 params:(id)a1 parseModelDuration:(double)a2 netDuration:(double)a3 error:(id)a4;
+ (void)updatePlaylistInfoWithPlaylistID:(id)a0 title:(id)a1 desc:(id)a2 picURL:(id)a3 privacyStatus:(unsigned long long)a4 completion:(id /* block */)a5;
+ (void)requestMusicChartDetailWithChartId:(id)a0 version:(id)a1 musicId:(id)a2 cursor:(id)a3 count:(id)a4 needMusicRank:(BOOL)a5 needMusic:(BOOL)a6 withChartMeta:(BOOL)a7 itemId:(id)a8 loadType:(id)a9 completion:(id /* block */)a10;
+ (void)requestMusicListWithChartId:(id)a0 version:(id)a1 cursor:(id)a2 count:(id)a3 itemCount:(id)a4 withDetailUrl:(BOOL)a5 withChartMeta:(BOOL)a6 completion:(id /* block */)a7;
+ (void)requestPlaylistWithSecUid:(id)a0 scene:(unsigned long long)a1 myCount:(long long)a2 myCursor:(long long)a3 count:(long long)a4 cursor:(long long)a5 completion:(id /* block */)a6;
+ (void)requestCollectAndRecommendMusicWithUserID:(id)a0 cursor:(id)a1 count:(id)a2 recommendCount:(id)a3 onlyRecommend:(id)a4 completion:(id /* block */)a5;
+ (void)requestPlaylistCollectWithPlaylistID:(id)a0 targetCollectionType:(BOOL)a1 completion:(id /* block */)a2;
+ (void)requestFeedListWithScene:(id)a0 relativeMusicId:(id)a1 playlistID:(id)a2 frontIds:(id)a3 count:(id)a4 responseBlock:(id /* block */)a5 completion:(id /* block */)a6;
+ (void)requestCollectionListWithPlaylistID:(id)a0 userID:(id)a1 scene:(id)a2 cursor:(id)a3 count:(id)a4 completion:(id /* block */)a5;
+ (void)requestCollectMusicWithID:(id)a0 videoID:(id)a1 action:(unsigned long long)a2 scene:(id)a3 completion:(id /* block */)a4;
+ (void)requestCollectToLunaMusicID:(id)a0 mediaType:(unsigned long long)a1 actionType:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)requestPlaylistAddorDeleteSongWithPlaylistID:(id)a0 musicModels:(id)a1 scene:(id)a2 action:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)requestDetailWithScene:(id)a0 musicId:(id)a1 responseBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)batchRequestMusicLiteInfoWithScene:(id)a0 musicIds:(id)a1 responseBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)requestServerConfigWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestPlaylistBannerInfoWithCompletion:(id /* block */)a0;
+ (void)requestPlaylistReorderSongsWithPlaylistId:(id)a0 reorderedMusicIds:(id)a1 completion:(id /* block */)a2;
+ (void)requestPlaylistAddorDeleteSongWithPlaylistID:(id)a0 musicID:(id)a1 videoID:(id)a2 scene:(id)a3 action:(unsigned long long)a4 completion:(id /* block */)a5;
+ (void)requestPlaylistAddorDeleteSongWithPlaylistID:(id)a0 musicID:(id)a1 songID:(id)a2 videoID:(id)a3 scene:(id)a4 action:(unsigned long long)a5 completion:(id /* block */)a6;
+ (void)requestLunaMusicianInfoWithUserID:(id)a0 artistID:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
+ (void)requestPlaylistDetailWithPlaylistID:(id)a0 cursor:(id)a1 scene:(unsigned long long)a2 count:(id)a3 needPlaylistInfo:(BOOL)a4 completion:(id /* block */)a5;
+ (void)addSongWithPlaylistID:(id)a0 musicID:(id)a1 videoID:(id)a2 completion:(id /* block */)a3;
+ (void)addSongWithPlaylistID:(id)a0 musicID:(id)a1 videoID:(id)a2 scene:(id)a3 completion:(id /* block */)a4;
+ (void)deleteSongWithPlaylistID:(id)a0 musicID:(id)a1 videoID:(id)a2 completion:(id /* block */)a3;
+ (void)requestMusicWithSearchText:(id)a0 inPlaylist:(id)a1 cursor:(id)a2 scene:(id)a3 searchID:(id)a4 completion:(id /* block */)a5;
+ (void)createPlaylistVideoWithPlaylistId:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)checkPlaylistVideoGenerateStatusWithTaskId:(id)a0 playlistId:(id)a1 completion:(id /* block */)a2;
+ (void)requestLunaMusicianInfoWithUserID:(id)a0 scene:(id)a1 completion:(id /* block */)a2;

@end
