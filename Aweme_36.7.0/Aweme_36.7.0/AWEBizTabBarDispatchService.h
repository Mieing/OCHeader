@class NSString;

@interface AWEBizTabBarDispatchService : HTSService <AWEBizTabBarDispatchService>

@property (nonatomic) BOOL tabBarVCHasReload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)hitSecondPageDispatchOpt;
- (double)maxDelayReloadTime;
- (id)placeholderVCName;
- (BOOL)isLastLaunchException;
- (void)setLatestLaunchException:(BOOL)a0;
- (id)currentLaunchConfig;
- (id)config;

@end
