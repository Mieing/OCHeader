@class UIWindow;

@interface BDEnvPlatformWindow : UIWindow

@property (weak, nonatomic) UIWindow *appkeyWindow;
@property (nonatomic) BOOL isEnvKeyWindow;

- (void).cxx_destruct;
- (void)becomeKeyWindow;
- (void)makeKeyWindow;
- (void)makeKeyAndVisible;

@end
