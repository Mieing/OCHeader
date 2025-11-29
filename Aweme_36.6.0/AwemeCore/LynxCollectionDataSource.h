@class NSString, LynxUICollection;

@interface LynxCollectionDataSource : NSObject <UICollectionViewDataSource>

@property (readonly, weak, nonatomic) LynxUICollection *collection;
@property (nonatomic) unsigned long long operationIDCount;
@property (nonatomic) long long itemCount;
@property (nonatomic) BOOL firstTime;
@property (nonatomic) BOOL ignoreLoadCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemCount;
- (id)initWithLynxUICollection:(id)a0;
- (void)registerAllReuseIdentifiers;
- (void)performBatchUpdatesFirstTime;
- (BOOL)isEmptyDataUpdates;
- (id)invalidationContextForForcedItemCountChanging;
- (void)performBatchUpdatesWithInvaildationContext:(id)a0;
- (void)updateWithDiffResultApplyInvalidationContext:(id)a0;
- (void)loadCell:(id)a0 forIndexPath:(id)a1;
- (long long)generateOperationId;
- (BOOL)applyFirstTime;
- (void).cxx_destruct;
- (void)apply;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
