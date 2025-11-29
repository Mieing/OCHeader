@class NSString, AWEUserAccountLoadingHUD;

@interface AWEUserLoadingHUDManager : NSObject <AWEUserMessage, HTSAccountMessage>

@property (class, readonly, nonatomic) BOOL isLoading;

@property (retain, nonatomic) AWEUserAccountLoadingHUD *loadingHUD;
@property (nonatomic) BOOL isHUDShowing;
@property (nonatomic) long long showingCount;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long verifyAccountSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithTitle:(id)a0;
+ (void)showWithLastConfig;
+ (void)dismiss;
+ (void)start;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)_windowDidBecomeKeyNotification;
- (void)_windowDidResignKeyNotification;
- (void)_showLogingHUD;
- (void)_hideLogingHUD;
- (void)uniqueActionWhenStartLogin:(id /* block */)a0;
- (void)_hideThirdPartyLoadingIfNeeded;
- (BOOL)shouldHideLoadingWhenNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_keyWindow;

@end
