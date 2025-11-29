@class NSMutableArray, NSMutableDictionary;

@interface WCFinderAccessoryDownloadHeap : NSObject

@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) NSMutableDictionary *item2IndexMap;

- (long long)count;
- (void)addItem:(id)a0;
- (void)removeItemWithIdentifierKey:(id)a0;
- (void)removeItemWithGroupId:(id)a0;
- (void)removeAll;
- (id)pop;
- (id)topItem;
- (void)changeItemWithIdentiferKey:(id)a0 toPriority:(long long)a1;
- (void)mergeItem:(id)a0;
- (void)swimWithIndex:(long long)a0;
- (void)sinkWithIndex:(long long)a0;
- (void)swapItemWithIndexA:(long long)a0 andIndexB:(long long)a1;
- (id)itemAtIndex:(long long)a0;
- (void).cxx_destruct;

@end
