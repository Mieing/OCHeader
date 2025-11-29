@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface CAKCoreIconsCacheManager : NSObject

@property (nonatomic) BOOL didLoad;
@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadQueue;

+ (id)sharedInstance;

- (id)needLoadImageNames;
- (id)cachedImageWithName:(id)a0;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)loadCache;

@end
