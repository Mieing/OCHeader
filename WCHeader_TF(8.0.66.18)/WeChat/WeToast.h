@class MMToastView, MMToastParameter;

@interface WeToast : MMWindowViewController

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) MMToastView *toastView;
@property (retain, nonatomic) MMToastParameter *parameter;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ transitionToNewSizeBlock;
@property (nonatomic) double showDuration;
@property (nonatomic) BOOL needEndEditing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL blockUserInteraction;
@property (nonatomic) unsigned long long supportedOrientationsInIphone;
@property (nonatomic) BOOL loadingStyle;
@property (nonatomic) BOOL customTimeLoading;
@property (nonatomic) BOOL forbidAccessibilityAnnouncement;

+ (id)toast;

- (id)init;
- (void)hideWithAnimated:(int)a0;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (id /* block */)duration;
- (id /* block */)endEditing;
- (id /* block */)insets;
- (id /* block */)block;
- (id /* block */)doneText;
- (id /* block */)errorText;
- (id /* block */)text;
- (id /* block */)svgIconName;
- (id /* block */)icon;
- (id /* block */)loading;
- (id /* block */)attributedString;
- (id /* block */)customView;
- (id /* block */)completion;
- (id /* block */)transitionToNewSize;
- (id /* block */)showToast;
- (id /* block */)hideToast;
- (void)privateShowToast;
- (void)privateHideToast;
- (void)showToastWithText:(id)a0;
- (void)showToastWithText:(id)a0 completionBlock:(id /* block */)a1;
- (void)showToastWithIcon:(id)a0 text:(id)a1;
- (void)showToastWithIconImage:(id)a0 text:(id)a1 completionBlock:(id /* block */)a2;
- (void)showToastWithIcon:(id)a0 text:(id)a1 completionBlock:(id /* block */)a2;
- (void)showToastWithIcon:(id)a0 iconImage:(id)a1 text:(id)a2 completionBlock:(id /* block */)a3;
- (void)showDoneToastWithText:(id)a0;
- (void)showDoneToastWithText:(id)a0 completionBlock:(id /* block */)a1;
- (void)showErrorToastWithText:(id)a0;
- (void)showErrorToastWithText:(id)a0 completionBlock:(id /* block */)a1;
- (void)showIconToastWithText:(id)a0 success:(BOOL)a1;
- (void)showIconToastWithText:(id)a0 success:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)topViewControllerInMainWindow;
- (void).cxx_destruct;

@end
