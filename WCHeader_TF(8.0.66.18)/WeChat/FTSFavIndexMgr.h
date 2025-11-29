@class NSString, NSMutableDictionary, NSMutableSet, FTSFavDB, FTS5FavMigrationInfo;

@interface FTSFavIndexMgr : FTSIndexMgr <IFavoritesExt> {
    BOOL _hasNewIndexTask;
    BOOL _hasValidateTask;
    BOOL _isIndexing;
    NSMutableSet *_needIndexFavId;
    NSMutableSet *_needBatchGetFavId;
    NSMutableSet *_invalidateBatchGetFavId;
    NSMutableDictionary *_cacheTags;
    FTS5FavMigrationInfo *_favMigrationInfo;
}

@property (retain, nonatomic) FTSFavDB *ftsFavDB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFTSDB:(id)a0;
- (void)iFTSIndexingInit;
- (void)iFTSIndexingFireTask:(int)a0;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSClearIndex;
- (void)addBatchGetItem:(id)a0;
- (BOOL)removeBatchGetItem:(id)a0 isFromDelete:(BOOL)a1;
- (void)markMigrationStart;
- (void)markMigrationFinish;
- (id)pathForMigrationRecord;
- (void)OnAddNewFavoritesItems:(id)a0;
- (void)OnUpdateItems:(id)a0;
- (void)OnDelFavoritesItems:(id)a0;
- (void)fireFavIndexingTaskLoop;
- (BOOL)internalFTS5IndexingTaskWithNeedIndexFavId:(id)a0 needBatchGetFavItem:(id)a1 hasBuildIndexFavId:(id)a2;
- (id)getCacheTags;
- (id)getLocalIdSetFromCacheByTag:(id)a0;
- (void)internalIndexingDropTask;
- (void).cxx_destruct;

@end
