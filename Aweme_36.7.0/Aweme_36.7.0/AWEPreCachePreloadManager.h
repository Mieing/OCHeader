@class NSDictionary, NSError;

@interface AWEPreCachePreloadManager : NSObject

@property (copy, nonatomic) NSDictionary *cacheDict;
@property (nonatomic) BOOL hasReadFinished;
@property (nonatomic) BOOL hasStartReadCache;
@property (copy, nonatomic) id /* block */ readCompletionBlock;
@property (retain, nonatomic) NSError *error;

+ (BOOL)preloadCacheListEnable;
+ (BOOL)enablePrecacheAsyncCache;
+ (id)sharedInstance;

- (void)preloadCacheListIfNeeded;
- (void)p_getFeedCacheFromFile;
- (void)p_setupCacheListPreloadNextLaunch;
- (void)getFeedCacheFromFileWithCompletion:(id /* block */)a0;
- (void)setupPreCachePreloadNextLaunch;
- (void).cxx_destruct;
- (id)init;

@end
