@class YtSDKKitConfig;

@interface YtSDKKit : NSObject

@property (nonatomic) YtSDKKitConfig *sdkConfig;
@property (nonatomic) long long sdkMode;
@property (copy, nonatomic) id /* block */ processSucceedBlock;
@property (copy, nonatomic) id /* block */ processFailedBlock;
@property (copy, nonatomic) id /* block */ networkProcessBlock;

+ (id)sharedInstance;
+ (void)clearInstance;

- (id)sdkVersion;
- (int)loadSDKConfigWith:(id)a0 withUIConfig:(id)a1;
- (id)getUIConfigBy:(long long)a0;
- (id)getSDKConfigBy:(long long)a0;
- (id /* block */)fetchNetworkProcessBlock;
- (void)registerNetworkProcessBlock:(id /* block */)a0;
- (void)startProcessWithModeType:(long long)a0 withProcessSucceedBlock:(id /* block */)a1 withProcessFailedBlock:(id /* block */)a2;
- (void)setCompareImage:(id)a0;
- (id)topViewControllerWithRootViewController:(id)a0;
- (id)topViewController;
- (id)getTargetViewController;
- (id /* block */)viewControllerJumpBlock;
- (void).cxx_destruct;

@end
