@class FavoritesItemDB, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, FavoritesBatchGetMgrDelegate;

@interface FavoritesBatchGetMgr : MMObject <PBMessageObserverDelegate, INetworkStatusMgrExt> {
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_batchGetArray;
    BOOL _isGetting;
    unsigned int _autoBatchGetCount;
    BOOL _hasStartBatchGet;
    NSMutableArray *m_batchGetSourceIdFilters;
    BOOL m_isGettingBySourceId;
    NSObject<OS_dispatch_queue> *m_batchGetBySourceIdQueue;
}

@property (weak, nonatomic) id<FavoritesBatchGetMgrDelegate> delegate;

- (id)init;
- (void)initDB:(id)a0;
- (void)dealloc;
- (void)tryFixUploadFailWithLostHtmlNoteItem;
- (id)getNeedFetchNoteFileFavItemList;
- (void)addBatchGetFavoritesItemList:(id)a0;
- (void)TryStartBatchGet;
- (void)addClientItemAsNewItem:(id)a0;
- (BOOL)checkConflict:(id)a0 vs:(id)a1;
- (void)asyncDoAddNewItemList:(id)a0;
- (BOOL)tryFixDataStatusInDataList:(id)a0;
- (void)HandleBatchGetFavItemResp:(id)a0 Event:(unsigned int)a1;
- (void)addBatchGetSourceIdFilters:(id)a0;
- (void)TryStartBatchGetBySourceId;
- (void)handleBatchGetFavoriteItemBySourceIdResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (BOOL)shouldBetchGetAll;
- (void).cxx_destruct;

@end
