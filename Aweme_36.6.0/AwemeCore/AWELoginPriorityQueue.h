@interface AWELoginPriorityQueue : NSObject

+ (void)startShowLogin:(unsigned long long)a0;
+ (void)testLoginGuideABTestShow;
+ (void)failShowLoginStyle:(unsigned long long)a0 isStartShow:(BOOL)a1;
+ (void)startShowSMSLogin;
+ (void)startShowCombineLogin;
+ (void)showFailDowngradeWithCurrentStyle:(unsigned long long)a0 customType:(unsigned long long)a1;
+ (void)showManualDowngradeWithCurrentStyle:(unsigned long long)a0 customType:(unsigned long long)a1;
+ (void)manualShowLoginStyle:(unsigned long long)a0 currentViewController:(id)a1;
+ (void)showManualDowngradeWithCurrentStyle:(unsigned long long)a0 customType:(unsigned long long)a1 currentViewController:(id)a2;
+ (void)startShowCarrierLogin;
+ (void)failDowngradeToSMSLogin:(unsigned long long)a0;
+ (void)failDowngradeToCarrierLogin:(unsigned long long)a0;
+ (void)failDowngradeToCombineLogin;
+ (void)manualDowngradeToSMSLoginCurrentViewController:(id)a0;
+ (void)manualDowngradeToCarrierLoginCurrentViewController:(id)a0;
+ (void)manualDowngradeToCombineLoginCurrentViewController:(id)a0;
+ (void)startShowFailDowngradeWithCurrentStyle:(unsigned long long)a0;
+ (void)showFailDowngradeWithCurrentStyle:(unsigned long long)a0;
+ (void)showManualDowngradeWithCurrentStyle:(unsigned long long)a0 currentViewController:(id)a1;
+ (void)showManualDowngradeWithCurrentStyle:(unsigned long long)a0;
+ (id)shareInstance;

@end
