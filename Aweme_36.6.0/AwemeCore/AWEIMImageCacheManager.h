@class BDImageCache;

@interface AWEIMImageCacheManager : NSObject

@property (retain, nonatomic) BDImageCache *semiPermernantCache;

+ (id)sharedManager;

- (id)memoryImageForKey:(id)a0;
- (void)saveImageToMemoryCache:(id)a0 forKey:(id)a1;
- (id)localImageForKey:(id)a0;
- (void)removeLocalImageForKey:(id)a0;
- (void)saveImageToDiskCache:(id)a0 forKey:(id)a1;
- (void)didReceiveAWECleanCacheNotification;
- (void).cxx_destruct;
- (id)init;

@end
