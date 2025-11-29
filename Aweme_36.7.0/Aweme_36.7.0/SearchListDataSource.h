@class SearchList, NSString;

@interface SearchListDataSource : NSObject <UICollectionViewDataSource>

@property (nonatomic) long long itemCount;
@property (nonatomic) BOOL firstTime;
@property (readonly, weak, nonatomic) SearchList *searchList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateItemCount;
- (void)registerAllReuseIdentifiers;
- (void)performBatchUpdatesFirstTime;
- (void)loadCell:(id)a0 forIndexPath:(id)a1;
- (BOOL)applyFirstTime;
- (id)initWithSearchList:(id)a0;
- (void)postLoadCell:(id)a0 forIndexPath:(id)a1 LynxComponent:(id)a2;
- (void)performBatchUpdates;
- (BOOL)enableSearchListOutOfRangeFix;
- (void)setContextDictForSearchList;
- (void)updateWithDiffResultApply;
- (void)clearLayoutCache;
- (void)loadCellForNewArchAsync:(id)a0 forIndexPath:(id)a1;
- (void)loadCellForNewArch:(id)a0 forIndexPath:(id)a1;
- (id)generateContainerIDWithIndexPath:(id)a0;
- (void)preLoadCell:(id)a0 forIndexPath:(id)a1;
- (id)itemKeyForCellCompoentAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)apply;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)clearSessionId;

@end
