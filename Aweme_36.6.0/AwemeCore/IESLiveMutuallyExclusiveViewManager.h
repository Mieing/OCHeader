@class NSMutableDictionary, NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveMutuallyExclusiveViewManager : NSObject <IESLiveMutuallyExclusiveViewProtocol>

@property (retain, nonatomic) NSMutableDictionary *graphMap;
@property (retain, nonatomic) NSMutableDictionary *itemMap;
@property (retain, nonatomic) NSMutableArray *itemQueue;
@property (retain, nonatomic) NSMutableSet *showingItems;
@property (retain, nonatomic) NSMutableDictionary *itemIDMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItem:(id)a0 priority:(long long)a1;
- (void)addNodeToGraphWithItemID:(id)a0 mutuallyExclusiveItemSet:(id)a1;
- (void)p_showItemIfNeeded:(id)a0;
- (void)p_removeItem:(id)a0 finished:(BOOL)a1;
- (void)removeItem:(id)a0 finished:(BOOL)a1;
- (void)p_checkItemQueue;
- (void)p_updateItemIDMapWithItemID:(id)a0 mutuallyExclusiveItems:(id)a1;
- (void)p_updateGraph;
- (void)p_addEdgesWithItemID:(id)a0 mutuallyExclusiveItems:(id)a1;
- (id)p_itemIDsFromItemIDMapWithIdentifier:(id)a0;
- (void)p_createNodeWithItemID:(id)a0 mutuallyExclusiveItems:(id)a1;
- (BOOL)p_showingItemContainsItemID:(id)a0;
- (void)addNodeToGraphWithItemID:(id)a0 mutuallyExclusiveItems:(long long)a1;
- (id)currentItemQueue;
- (id)p_nodesFromGraphWithIdentifier:(id)a0;
- (id)graph;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)init;
- (void)removeItemWithIdentifier:(id)a0;

@end
