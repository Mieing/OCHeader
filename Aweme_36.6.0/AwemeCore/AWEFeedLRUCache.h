@class AWEFeedLRUMap;

@interface AWEFeedLRUCache : NSObject {
    AWEFeedLRUMap *_LRUMap;
    unsigned long long _maxCount;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithMaxCount:(unsigned long long)a0;
- (void)removeAllObjects;
- (id)allValues;
- (unsigned long long)totalCount;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
