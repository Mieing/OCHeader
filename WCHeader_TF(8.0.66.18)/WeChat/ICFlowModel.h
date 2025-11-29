@class ICCollectionStatInfo, ICBatchFetchingContext, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICFlowModel : NSObject

@property (retain, nonatomic) ICCollectionStatInfo *statInfo;
@property (retain, nonatomic) NSHashTable *observerList;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workThread;
@property (retain, nonatomic) NSMutableArray *sectionItems;
@property (weak, nonatomic) id loadingNewId;
@property (weak, nonatomic) id loadingMoreId;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) ICBatchFetchingContext *batchFetchingContext;
@property (nonatomic) BOOL isFirstLoad;

- (id)indexPathOfDataItem:(id)a0;
- (id)indexPathOfDataItemWhere:(id /* block */)a0;
- (id)allFlatDataItems;
- (id)allFlatDataItemsWhere:(id /* block */)a0;
- (id)allSectionItems;
- (id)lastDataItem;
- (id)lastSectionItems;
- (id)dataItemAt:(id)a0;
- (void)appendDataItem:(id)a0;
- (void)insertDataItem:(id)a0 at:(id)a1;
- (void)replaceDataItem:(id)a0 at:(id)a1;
- (void)removeDataItemAt:(id)a0;
- (long long)dataItemCount;
- (void)replaceSectionItems:(id)a0 at:(long long)a1;
- (void)appendDataItems:(id)a0 atSection:(long long)a1;
- (void)appendSectionItems:(id)a0;
- (void)insertSectionItems:(id)a0 at:(long long)a1;
- (void)removeSectionAt:(unsigned long long)a0;
- (long long)sectionCount;
- (long long)sectionItemCountAt:(long long)a0;
- (id)sectionItemsAt:(long long)a0;
- (void)removeAllDataItem;
- (void)reloadDataItems:(id)a0;
- (void)updateUIDataItems:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)enumerateObserver:(id /* block */)a0;
- (void)enumerateObserver:(BOOL)a0 block:(id /* block */)a1;
- (BOOL)isLoading;
- (BOOL)isLoadingNew;
- (void)fetchNew;
- (id)executeLoadNew;
- (void)didExecuteLoadNewWithResults:(id)a0 error:(id)a1 hasMore:(BOOL)a2;
- (id)loadNew:(id /* block */)a0;
- (void)processLoadNew:(id)a0 error:(id)a1;
- (void)handleFetchNewResult:(id)a0 error:(id)a1 hasMore:(BOOL)a2;
- (void)cancelFetchNew;
- (void)cancelFetchNew:(id)a0;
- (BOOL)isLoadingMore;
- (BOOL)shouldLoadMore;
- (void)fetchMore:(id)a0;
- (id)loadMore:(id /* block */)a0;
- (id)executeLoadMore;
- (void)didExecuteLoadMoreWithResults:(id)a0 error:(id)a1 hasMore:(BOOL)a2;
- (void)processLoadMore:(id)a0 error:(id)a1;
- (void)handleFetchMore:(id)a0 result:(id)a1 error:(id)a2 hasMore:(BOOL)a3;
- (void)cancelFetchMore;
- (void)cancelFetchMore:(id)a0;
- (void).cxx_destruct;

@end
