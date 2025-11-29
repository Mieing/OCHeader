@class NSString, UIWindow, UIViewController;

@interface IESIMBindPhoneManager : NSObject <IESIMBindPhoneInterface>

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIWindow *lastKeyWindow;
@property (retain, nonatomic) UIViewController *windowRootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transferToBindPhoneWithEnterFrom:(id)a0 presentHandler:(id /* block */)a1;
+ (id)sharedInstance;

- (id)makeBindPhoneAlertContext:(id)a0;
- (void)showBindPhoneAlertWithContext:(id)a0;
- (void).cxx_destruct;

@end
