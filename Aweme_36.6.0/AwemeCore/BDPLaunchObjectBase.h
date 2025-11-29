@class NSString, BDPTimorLaunchParam;

@interface BDPLaunchObjectBase : NSObject <BDPLaunchDispatchObjectProtocol, BDPCustomBootProtocol>

@property (retain, nonatomic) BDPTimorLaunchParam *launchParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)openWithLaunchParam:(id)a0;
+ (id)containerControllerWithLaunchParam:(id)a0;
+ (void)rootNaviPresentVC:(id)a0 containerVC:(id)a1 param:(id)a2;
+ (void)rootNaviPresentVC:(id)a0 containerVC:(id)a1 param:(id)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
+ (BOOL)URL:(id)a0 isEqualURL:(id)a1 ignoredQueryFields:(id)a2;
+ (BOOL)imitateRestartWhenContainerExist:(id)a0;
+ (BOOL)imitateRestartWhenLaunchFromPopup:(id)a0 topVC:(id)a1;
+ (BOOL)shouldCancelAppLaunchWithTask:(id)a0 common:(id)a1 topVC:(id)a2;
+ (void)launchRouteStartWithLaunchParam:(id)a0 uniqueID:(id)a1;
+ (BOOL)imitateRestartWhenContainerExistForNativeApp:(id)a0;

@end
