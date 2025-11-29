@class FavoritesItemDB, NSMutableArray;
@protocol FavoritesBatchDelMgrDelegate;

@interface FavoritesBatchDelMgr : MMObject <PBMessageObserverDelegate> {
    FavoritesItemDB *_favItemDB;
    NSMutableArray *_batchDelArray;
    NSMutableArray *_failArray;
    NSMutableArray *m_batchDelSourceIdFilters;
    NSMutableArray *m_batchDelFailedFilters;
    BOOL _isDeling;
    BOOL m_isDelingBySourceId;
}

@property (weak, nonatomic) id<FavoritesBatchDelMgrDelegate> delegate;

- (id)init;
- (void)initDB:(id)a0;
- (BOOL)loadBatchDelQueue;
- (void)dealloc;
- (void)addBatchDelFavoritesItemList:(id)a0;
- (void)TryStartBatchDel;
- (void)HandleBatchDelFavItemResp:(id)a0 Event:(unsigned int)a1;
- (void)addBatchDelSourceIdFilters:(id)a0;
- (void)tryStartBatchDelBySourceId;
- (void)handleBatchDelFavItemBySourceIdResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)checkFailQueue;
- (void).cxx_destruct;

@end
