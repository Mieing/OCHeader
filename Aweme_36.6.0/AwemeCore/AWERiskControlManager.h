@class UIWindow, UIViewController;

@interface AWERiskControlManager : NSObject

@property (getter=isShowing) BOOL showing;
@property (retain, nonatomic) UIWindow *lastKeyWindow;
@property (retain, nonatomic) UIViewController *curPresentVC;
@property (retain, nonatomic) UIWindow *curWindow;

+ (id)sharedInstance;

- (void)verifyWithType:(unsigned long long)a0 traceURL:(id)a1 completion:(id /* block */)a2;
- (Class)classForRiskControlType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dismiss:(id /* block */)a0;

@end
