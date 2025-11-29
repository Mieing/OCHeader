@class NSString;

@interface MegaVideoFeedFlowModelCpp : UnitRCObjcBaseProxyClass <MegaVideoFeedFlowModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)modelType;
- (id)identifier;
- (void)setMonitor:(id)a0;
- (BOOL)isLoading;
- (BOOL)isInitialLoading;
- (BOOL)isLoadingNew;
- (BOOL)hasNew;
- (BOOL)isLoadingMore;
- (BOOL)hasMore;
- (int)itemCount;
- (id)itemAtIndex:(int)a0;
- (int)indexOfItem:(id)a0;
- (id)itemIdList;
- (id)itemList;
- (void)loadItemList:(id /* block */)a0;
- (void)insertItemAtIndex:(id)a0 index:(int)a1;
- (void)replaceItemAtIndex:(id)a0 index:(int)a1;
- (BOOL)deleteItemAtIndex:(int)a0;
- (BOOL)deleteItem:(id)a0;
- (void)appendList:(id)a0;
- (void)clearList;
- (void)fetchData:(int)a0 callback:(id /* block */)a1;
- (void)addModelListener:(id)a0;
- (void)removeModelListener:(id)a0;
- (int)remainCountForPrefetchNext;
- (void)setRemainCountForPrefetchNext:(int)a0;
- (id)splitWording;
- (int)splitIndex;

@end
