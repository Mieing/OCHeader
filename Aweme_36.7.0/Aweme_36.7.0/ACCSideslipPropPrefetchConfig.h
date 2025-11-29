@interface ACCSideslipPropPrefetchConfig : NSObject

@property (copy, nonatomic) id /* block */ speedCallback;

+ (long long)maxDownloadTaskSize;
+ (double)preloadLimitFactor;
+ (long long)maxPreloadTaskSize;
+ (BOOL)enablePrefetchOpt;
+ (void)updateCurrentNetSpeed:(id /* block */)a0;
+ (long long)leftPreloadSize;
+ (long long)rightPreloadSize;
+ (id)preloadParams;
+ (id)defaultManager;

- (void).cxx_destruct;

@end
