@class NSMutableDictionary, MiniGameVideoShareHandler, NSString, WCTTable;

@interface MiniGameVideoService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTTable *miniGameVideoTable;
@property (retain, nonatomic) NSMutableDictionary *publishCallbackMap;
@property (retain, nonatomic) NSMutableDictionary *shareCacheMap;
@property (retain, nonatomic) MiniGameVideoShareHandler *shareHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)saveToGameCenterLocal:(id)a0 maxNum:(int)a1 callBack:(id /* block */)a2;
- (id)saveSingleVideoToGameCenterLocal:(id)a0;
- (void)clearExpiredMiniGameVideos;
- (void)shareToFriend:(id)a0 withParentVC:(id)a1 callBack:(id /* block */)a2;
- (void)shareToFriendTimeline:(id)a0 withParentVC:(id)a1 callBack:(id /* block */)a2;
- (void)handleShareMiniGameVideo:(id)a0 withParentVC:(id)a1 shareType:(unsigned long long)a2 callBack:(id /* block */)a3;
- (void)shareToGameCenterPublish:(id)a0 callBack:(id /* block */)a1;
- (BOOL)handleWebCallUploadVideoByVideoId:(id)a0 callBack:(id /* block */)a1;
- (void)jumpMiniGameVideoManagePage;
- (BOOL)deleteMiniGameVideoByVideoId:(id)a0;
- (id)getMiniGameVideoByVideoId:(id)a0;
- (id)getCurUserAllLocalMiniGameVideos;
- (void)cacheShareInfoWithVideoFile:(id)a0 shareUrl:(id)a1 shareThumbUrl:(id)a2;
- (id)getShareInfoByVideoPath:(id)a0;
- (id)getGameCenterVideosPath;
- (void)reportAllLocalVideosToServer;
- (void)reportLocalVideoToServerWithOpt:(int)a0 andVideoIdList:(id)a1;
- (void)onPublishMiniGameVideoSuccess:(id)a0 needDelete:(BOOL)a1;
- (void)onPublishMiniGameVideoFaild:(id)a0 errorMsg:(id)a1;
- (void)onPublishMiniGameVideoCancel:(id)a0;
- (void)doMiniGameVideoReport:(id)a0;
- (void).cxx_destruct;

@end
