@class NSMutableDictionary;

@interface TTAVTraitObjectManager : NSObject {
    NSMutableDictionary *_traitObjects;
}

- (id)objetForKey:(long long)a0;
- (int)remove:(long long)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (id)allObjects;
- (void)setObject:(id)a0 forKey:(long long)a1;

@end
