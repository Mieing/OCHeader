@class BDXThreadSafeDictionary;

@interface PuzzleMOCache : NSObject

@property (retain, nonatomic) BDXThreadSafeDictionary *cacheMap;

- (void)_cleanNilObjects;
- (void)setObject:(id)a0 forIdentifier:(id)a1;
- (id)getObjectForIdentifier:(id)a0;
- (id)cachedObjects;
- (void).cxx_destruct;
- (id)init;

@end
