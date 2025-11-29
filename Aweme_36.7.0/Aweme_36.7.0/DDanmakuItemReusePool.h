@class NSMutableDictionary;

@interface DDanmakuItemReusePool : NSObject

@property (nonatomic) unsigned long long capacity;
@property (retain, nonatomic) NSMutableDictionary *itemTypeToClassMap;
@property (retain, nonatomic) NSMutableDictionary *itemViewTypeToCacheSetMap;
@property (retain, nonatomic) NSMutableDictionary *itemNodeTypeToCacheSetMap;

- (id)dequeueItemViewWithType:(id)a0;
- (void)enqueueItemView:(id)a0 forType:(id)a1;
- (id)dequeueItemInfoWithType:(id)a0;
- (void)registerClass:(Class)a0 forItemViewType:(id)a1;
- (void)registerClass:(Class)a0 forItemNodeType:(id)a1;
- (void)enqueueItemInfo:(id)a0 forType:(id)a1;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;

@end
