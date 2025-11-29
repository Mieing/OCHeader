@class LiteAppDynamicModuleCallback, UIViewController, NSDictionary;

@interface RealNameVerifyImpl : NSObject

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callBack;
@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) NSDictionary *option;

- (void)startRealNameVerify:(id)a0 currentVc:(id)a1 resultCallback:(id)a2;
- (void)handleSuccessNotification:(id)a0;
- (void)handleCancelNotification:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
