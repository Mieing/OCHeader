@interface AWEMiniLunaRequestManager : NSObject

+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)requestDirtyWordCheckWithType:(id)a0 content:(id)a1 completion:(id /* block */)a2;
+ (void)requestSearchChartCompletion:(id /* block */)a0;
+ (void)requestAutoPlayInfoWithCompletion:(id /* block */)a0;
+ (void)request:(id)a0 responseBlock:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)cancelCollectPlaylistWithPlaylistID:(id)a0 completion:(id /* block */)a1;
+ (void)requestPlaylistDetailWithPlaylistID:(id)a0 playlistType:(unsigned long long)a1 secUserID:(id)a2 cursor:(id)a3 count:(id)a4 onlyNeedMedia:(BOOL)a5 onlyNeedMediaID:(BOOL)a6 completion:(id /* block */)a7;
+ (void)requestCreatedPlaylistWithSecUserID:(id)a0 cursor:(id)a1 count:(long long)a2 completion:(id /* block */)a3;
+ (void)requestCreatedPlaylistWithCursor:(id)a0 count:(long long)a1 completion:(id /* block */)a2;
+ (void)requestCollectedPlaylistWithSecUserID:(id)a0 cursor:(id)a1 count:(long long)a2 completion:(id /* block */)a3;
+ (void)requestCollectedPlaylistWithCursor:(id)a0 count:(long long)a1 completion:(id /* block */)a2;
+ (void)requestDailyPlaylistWithCompletion:(id /* block */)a0;
+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 responseBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
+ (void)createPlaylistWithTitle:(id)a0 isPrivate:(BOOL)a1 trackIDs:(id)a2 completion:(id /* block */)a3;
+ (void)collectPlaylistWithPlaylistID:(id)a0 completion:(id /* block */)a1;
+ (void)updatePlaylistInfoWithPlaylistID:(id)a0 title:(id)a1 desc:(id)a2 picURL:(id)a3 privacyStatus:(BOOL)a4 completion:(id /* block */)a5;
+ (id)baseURL;

@end
