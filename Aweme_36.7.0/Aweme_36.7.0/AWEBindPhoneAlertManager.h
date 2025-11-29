@class NSString, UIWindow, UIViewController;

@interface AWEBindPhoneAlertManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIWindow *lastKeyWindow;
@property (retain, nonatomic) UIViewController *windowRootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowAlertWithType:(unsigned long long)a0;
+ (void)showBindPhoneAlertWithType:(unsigned long long)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
+ (void)showBindPhoneAlertWithType:(unsigned long long)a0 cancelTitle:(id)a1 confirmTitle:(id)a2 subtitle:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5 presentHandler:(id /* block */)a6;
+ (BOOL)checkAndShowBindPhoneAlertWithType:(unsigned long long)a0 confirmBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
+ (BOOL)checkAndShowBindPhoneAlertWithPrivacyType:(unsigned long long)a0;
+ (void)start;
+ (id)sharedInstance;

@end
