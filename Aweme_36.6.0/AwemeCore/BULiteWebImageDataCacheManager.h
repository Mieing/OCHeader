@class NSCache;

@interface BULiteWebImageDataCacheManager : NSObject

@property (retain, nonatomic) NSCache *cache;

+ (id)sharedManager;

- (void)storeImageData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)imageDataForKey:(id)a0;

@end
