@class NSData, FavoritesItemDB, NSObject;
@protocol OS_dispatch_queue, FavoritesSyncMgrDelegate;

@interface FavoritesSyncMgr : MMObject <PBMessageObserverDelegate, CNetworkStatusExt> {
    NSData *_syncKeyBuffer;
    FavoritesItemDB *_favItemDB;
    BOOL _isSendingReq;
    int _syncSelector;
    int _needSyncSelector;
    BOOL _hasUpdateInfo;
    NSObject<OS_dispatch_queue> *m_handleCmdListQueue;
}

@property (weak, nonatomic) id<FavoritesSyncMgrDelegate> delegate;

- (BOOL)saveSyncKeyBuffer;
- (void)loadSyncKeyBuffer;
- (id)init;
- (void)dealloc;
- (void)initDB:(id)a0;
- (BOOL)resetSyncValue:(int)a0;
- (void)SyncByNotify:(unsigned int)a0;
- (void)aysncHandleFavoritesSyncRespCmdList:(id)a0 Response:(id)a1;
- (void)HandleFavoritesSyncResp:(id)a0 Event:(unsigned int)a1;
- (void)pinTopFavInChat:(unsigned int)a0 onTop:(BOOL)a1;
- (void)HandlePinTopFavInChatResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
