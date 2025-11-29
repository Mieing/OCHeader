@class NSCache;

@interface AWEDeliverySendImageCache : NSObject

@property (retain, nonatomic) NSCache *memoryCache;

+ (id)sharedInstance;

- (void)clearAllCache;
- (void)cacheImage:(id)a0 uniqueId:(id)a1;
- (id)requestImageWithUniqueId:(id)a0;
- (void)removeImageForUniqueId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
