@interface TSPKCallStackCacheInfo : NSObject

+ (id)sharedInstance;

- (id)loadWithVersion:(id)a0;
- (void)save:(id)a0 forVersion:(id)a1;
- (id)cachePath:(id)a0;

@end
