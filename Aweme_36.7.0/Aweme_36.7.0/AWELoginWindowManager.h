@class UIWindow, NSString, AWELoginWindow, UIViewController;

@interface AWELoginWindowManager : NSObject <AWEUserMessage>

@property (weak, nonatomic) UIWindow *lastWindow;
@property (nonatomic) BOOL fixedBackgroundColor;
@property (nonatomic) BOOL hasChangedWindowLevel;
@property (retain, nonatomic) AWELoginWindow *loginWindow;
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (nonatomic) BOOL isThirdPartyLoginButtonClicked;
@property (readonly, nonatomic) UIWindow *visibleWindow;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (BOOL)shouldChangeLastWindowLevel;
- (BOOL)shouldHiddenLastWindowAccessibility;
- (void)removeBackgroundColor;
- (void)addBackgroundColor;
- (void)changeWindowLevelIfNeeded;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)makeKeyAndVisible;

@end
