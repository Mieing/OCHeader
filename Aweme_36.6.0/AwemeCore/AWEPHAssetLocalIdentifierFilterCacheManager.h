@class NSCache;

@interface AWEPHAssetLocalIdentifierFilterCacheManager : NSObject

@property (retain, nonatomic) NSCache *assetIdCache;

+ (id)sharedInstance;

- (BOOL)getCachedResult:(BOOL *)a0 forIdentifier:(id)a1;
- (void)setCachedResult:(BOOL)a0 forIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
