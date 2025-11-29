@protocol UIViewControllerTransitioningDelegate;

@interface AWELoginPanelShowManager : NSObject

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> transitioningDelegate;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;
+ (void)showLoginNavigationController:(id)a0;
+ (void)showLoginNavigationController:(id)a0 animated:(BOOL)a1;
+ (void)downgradeToHalfScreenViewControllerNewAnimation:(id)a0 previousViewController:(id)a1;
+ (void)downgradeToFullScreenLoginViewController:(id)a0 animated:(BOOL)a1 IsManual:(BOOL)a2;
+ (void)downgradeToFullScreenLoginViewController:(id)a0 IsManual:(BOOL)a1;
+ (BOOL)isContainerizedPageLoginStyle:(unsigned long long)a0 viewController:(id)a1;
+ (BOOL)canUseNewFullScreenAnimation;
+ (void)showFinish;
+ (void)showCombineUserLogin;
+ (void)showHalfScreenCombineUserLogin;
+ (void)showSMSLogin;
+ (void)showSMSLoginPreferHalfScreen;
+ (void)showCarrierLogin:(id)a0;
+ (void)showHalfScreenCarrierLogin:(id)a0;
+ (void)downgradeToHalfScreenCombineLoginFrom:(id)a0;
+ (void)downgradeToHalfScreenCarrierLoginFrom:(id)a0 phoneModel:(id)a1;
+ (void)downgradeToHalfScreenSMSLoginFrom:(id)a0;
+ (void)downgradeToHalfScreenSMSCodeLoginFrom:(id)a0 routerModel:(id)a1 phoneNumber:(id)a2;
+ (void)downgradeToFullScreenCarrierLogin:(id)a0 isManual:(BOOL)a1;
+ (void)downgradeToFullScreenCombineUserLoginIsManual:(BOOL)a0;
+ (void)downgradeToFullScreenSMSIsManual:(BOOL)a0;
+ (void)changeToPadSMSLogin;
+ (void)changeToPadQRScannerLogin;
+ (id)sharedInstance;

- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void).cxx_destruct;
- (id)init;

@end
