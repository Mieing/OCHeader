@interface AWEMusicDataManager : NSObject

+ (void)requestCollectionListWithPlaylistID:(id)a0 userID:(id)a1 cursor:(id)a2 count:(id)a3 scene:(id)a4 completion:(id /* block */)a5;
+ (void)createPlaylistWithTitle:(id)a0 picUrl:(id)a1 des:(id)a2 privacySetting:(unsigned long long)a3 musicInfo:(id)a4 completion:(id /* block */)a5;
+ (void)requestCollectMusicWithID:(id)a0 videoID:(id)a1 type:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)requestCollectAndRecommendMusicWithUserID:(id)a0 cursor:(id)a1 count:(id)a2 recommendCount:(id)a3 onlyRecommend:(id)a4 completion:(id /* block */)a5;
+ (void)requestPlaylistCollectWithPlaylistID:(id)a0 targetCollectionType:(BOOL)a1 completion:(id /* block */)a2;
+ (void)requestFeedListWithFrontIds:(id)a0 playlistID:(id)a1 count:(id)a2 responseBlock:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)requestCollectMusicWithID:(id)a0 videoID:(id)a1 scene:(id)a2 type:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)requestCollectToLunaMusicID:(id)a0 mediaType:(unsigned long long)a1 actionType:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)requstPlaylistAddSongWithPlaylistID:(id)a0 musicModels:(id)a1 completion:(id /* block */)a2;
+ (void)requestFeedListWithCount:(id)a0 playlistID:(id)a1 completion:(id /* block */)a2;
+ (void)requestFeedListWithFrontIds:(id)a0 count:(id)a1 responseBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)requestCollectionListWithUserID:(id)a0 cursor:(id)a1 count:(id)a2 completion:(id /* block */)a3;
+ (void)requestValidCollectionListWithPlaylistID:(id)a0 userID:(id)a1 cursor:(id)a2 count:(id)a3 completion:(id /* block */)a4;
+ (void)createMiniLunaPlaylistWithTitle:(id)a0 isprivate:(BOOL)a1 trackIDs:(id)a2 completion:(id /* block */)a3;
+ (void)requstPlaylistAddSongWithPlaylistID:(id)a0 musicID:(id)a1 videoID:(id)a2 completion:(id /* block */)a3;
+ (void)requestMiniLunaPlaylistCollectWithPlaylistIDs:(id)a0 completion:(id /* block */)a1;
+ (void)requestMiniLunaPlaylistCancelCollectWithPlaylistIDs:(id)a0 completion:(id /* block */)a1;

@end
