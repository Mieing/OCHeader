@interface AWEDataLayerFastMap : NSObject {
    struct __CFDictionary { } *_map;
}

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (void)removeAllObjects;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)allObjects;
- (void)dealloc;

@end
