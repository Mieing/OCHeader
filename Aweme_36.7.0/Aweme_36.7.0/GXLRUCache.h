@class NSMutableDictionary, GXLRUNode;

@interface GXLRUCache : NSObject {
    GXLRUNode *_p;
}

@property (retain, nonatomic) NSMutableDictionary *map;
@property (readonly, nonatomic) long long maxCount;
@property (readonly, nonatomic) unsigned long long count;

- (void)updateNode:(id)a0;
- (void)updateLimitCount:(long long)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)initWithMaxCount:(long long)a0;
- (void)removeAllObjects;
- (void)insertNode:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
