@class UIWindow, UIViewController;

@interface AWENewVersionAlertManager : NSObject

@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIWindow *lastKeyWindow;
@property (retain, nonatomic) UIViewController *windowRootViewController;
@property (nonatomic) BOOL alertViewIsShown;

+ (id)sharedInstance;

- (void)checkAppNewVersion;
- (BOOL)isNewVersionAlertShowing;
- (void)splashDidFinished;
- (void)checkAppNewVersionInhouseWithDelay;
- (void)checkAppNewVersionTestFlight;
- (void)checkInhouseNewVersionWithDelay;
- (void)getTFLinkResponseCompletion:(id /* block */)a0;
- (void)showAlertViewWithInfo:(id)a0 confirmAction:(id /* block */)a1 cancelAction:(id /* block */)a2;
- (void)checkInhouseNewVersion;
- (void)checkAppNewVersionInhouse;
- (id)inhouseVersionURL;
- (void)hideWindow;
- (void).cxx_destruct;
- (void)dealloc;
- (id)buildVersionString;

@end
