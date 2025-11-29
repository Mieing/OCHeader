@class IGListBatchUpdateData, NSArray, NSString, NSMutableArray, IGListBatchUpdates;
@protocol IGListAdapterUpdaterDelegate;

@interface IGListAdapterUpdater : NSObject <IGListUpdatingDelegate>

@property (nonatomic) BOOL awelistkit_syncUpdate;
@property (copy, nonatomic) id /* block */ getDataSource;
@property (copy, nonatomic) NSArray *fromObjects;
@property (copy, nonatomic) id /* block */ toObjectsBlock;
@property (copy, nonatomic) NSArray *pendingTransitionToObjects;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) BOOL queuedUpdateIsAnimated;
@property (retain, nonatomic) IGListBatchUpdates *batchUpdates;
@property (copy, nonatomic) id /* block */ objectTransitionBlock;
@property (copy, nonatomic) id /* block */ reloadUpdates;
@property (nonatomic, getter=hasQueuedReloadData) BOOL queuedReloadData;
@property (nonatomic) long long state;
@property (retain, nonatomic) IGListBatchUpdateData *applyingUpdateData;
@property (weak, nonatomic) id<IGListAdapterUpdaterDelegate> delegate;
@property (nonatomic) BOOL movesAsDeletesInserts;
@property (nonatomic) BOOL allowsBackgroundReloading;
@property (nonatomic) double coalescanceTime;
@property (nonatomic) long long experiments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)debugDescriptionLines;
- (void)awelistkit_performReloadDataWithCollectionView:(id)a0;
- (void)awelistkit_performBatchUpdatesWithCollectionView:(id)a0;
- (void)awelistkit_queueUpdateWithCollectionView:(id)a0;
- (void)cleanStateBeforeUpdates;
- (void)_cleanStateAfterUpdates;
- (void)performReloadDataWithCollectionView:(id)a0;
- (void)performBatchUpdatesWithCollectionView:(id)a0;
- (void)reloadCollectionView:(id)a0 sections:(id)a1;
- (id)objectLookupPointerFunctions;
- (void)performUpdateWithCollectionView:(id)a0 fromObjects:(id)a1 toObjectsBlock:(id /* block */)a2 animated:(BOOL)a3 objectTransitionBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)reloadDataWithCollectionView:(id)a0 reloadUpdateBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)performUpdateWithCollectionView:(id)a0 animated:(BOOL)a1 itemUpdates:(id /* block */)a2 completion:(id /* block */)a3;
- (void)reloadItemInCollectionView:(id)a0 fromIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)insertItemsIntoCollectionView:(id)a0 indexPaths:(id)a1;
- (void)deleteItemsFromCollectionView:(id)a0 indexPaths:(id)a1;
- (void)moveItemInCollectionView:(id)a0 fromIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)moveSectionInCollectionView:(id)a0 fromIndex:(long long)a1 toIndex:(long long)a2;
- (void)_performBatchUpdatesItemBlockApplied;
- (void)_beginPerformBatchUpdatesToObjects:(id)a0;
- (id)_flushCollectionView:(id)a0 withDiffResult:(id)a1 batchUpdates:(id)a2 fromObjects:(id)a3;
- (void)_queueUpdateWithCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasChanges;

@end
