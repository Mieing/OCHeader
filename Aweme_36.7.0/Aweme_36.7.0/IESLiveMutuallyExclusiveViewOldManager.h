@class NSMutableDictionary, NSString, NSMutableSet, NSMutableArray;

@interface IESLiveMutuallyExclusiveViewOldManager : NSObject <IESLiveMutuallyExclusiveViewProtocol>

@property (retain, nonatomic) NSMutableDictionary *graphMap;
@property (retain, nonatomic) NSMutableDictionary *itemMap;
@property (retain, nonatomic) NSMutableArray *itemQueue;
@property (retain, nonatomic) NSMutableSet *showingItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItem:(id)a0 priority:(long long)a1;
- (void)removeItem:(id)a0 finished:(BOOL)a1;
- (void)addNodeToGraphWithItemID:(id)a0 mutuallyExclusiveItems:(long long)a1;
- (void)p_addNodeToGraphWithItemID:(id)a0 mutuallyExclusiveItems:(id)a1;
- (BOOL)p_showingItemsContainsID:(id)a0;
- (void)removeItemWithKey:(id)a0;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)init;
- (void)removeItemWithIdentifier:(id)a0;

@end
