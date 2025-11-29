@class NSString, MMSnackBarConfig, UIViewController;

@interface MMSnackBarWindowViewController : MMWindowViewController <MMSnackBarWindowViewDelegate, MMUIWindowPassThroughDelegate, MMSnackBarViewDelegate>

@property (retain, nonatomic) MMSnackBarConfig *config;
@property (copy, nonatomic) id /* block */ actionHandlerBlock;
@property (copy, nonatomic) id /* block */ willAppearHandlerBlock;
@property (weak, nonatomic) UIViewController *snackBarContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowQuickReplyPush:(id)a0;
- (void)loadView;
- (id)init;
- (void)dealloc;
- (void)showSnackBar;
- (void)updateSnackBar;
- (void)hideSnackBar:(id /* block */)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)ensureSnackBarView;
- (id)snackBarView;
- (void)addNotifications;
- (void)removeNotification;
- (double)snackBarBottomInsetOffset;
- (BOOL)shouldPassThroughFor:(id)a0;
- (void)onNeedDoAction;
- (void)onNeedHideSnackBar;
- (id)topViewControllerInMainWindow;
- (void).cxx_destruct;

@end
