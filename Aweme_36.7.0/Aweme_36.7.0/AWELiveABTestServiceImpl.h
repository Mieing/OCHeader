@class NSString;

@interface AWELiveABTestServiceImpl : NSObject <IESLiveABTestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoadWhenDylibLoad;
+ (void)registerPKSmoothEnterRoom;
+ (void)registerMultiLinkerSmoothEnterRoom;
+ (void)registerIMShareOptimize;
+ (void)registerPKSearchPreviewEnable;
+ (void)registerHighValueDistributionEntranceConfig;
+ (void)registerNetSwitchEnableV3;

- (id)iesLive_ABValueForKey:(id)a0;
- (id)iesLiveNew_ABValueForKey:(id)a0;
- (id)iesLive_clientABvalueForKey:(id)a0 exposure:(BOOL)a1;

@end
