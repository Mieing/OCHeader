@class AWEShareContext, UIButton, UIImageView, NSString, AWESharePanelCustomConfiguration, AWESharePanelViewController, UIViewController;

@interface AWESharePanelContainerViewController : DUXContentSheet <AWESharePanelSheet, DUXSheetDelegate>

@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) AWESharePanelCustomConfiguration *configuration;
@property (nonatomic) unsigned long long displayType;
@property (weak, nonatomic) UIViewController *presentingController;
@property (weak, nonatomic) AWESharePanelViewController *presentedController;
@property (weak, nonatomic) UIButton *shareButton;
@property (nonatomic) BOOL isPhoneLandscape;
@property (retain, nonatomic) UIImageView *shapView;
@property (nonatomic) double currentKeyboardHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSceneWithShareContext:(id)a0 configuration:(id)a1 presentingViewController:(id)a2 shareElement:(id)a3;
+ (id)phoneLandscapeSceneWithShareContext:(id)a0 configuration:(id)a1 presentingViewController:(id)a2;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)animateDismissWithCompletion:(id /* block */)a0;
- (id)initWithShareContext:(id)a0 configuration:(id)a1 presentingViewController:(id)a2 shareElement:(id)a3 isPhoneLandscape:(BOOL)a4;
- (unsigned long long)checkDisplayTypeWithView:(id)a0;
- (void)setupTopBubbleView;
- (void)setupShap;
- (BOOL)updateContentHeight:(double)a0 keyboardHeight:(double)a1 layoutIfNeed:(BOOL)a2 animateSheetHeight:(BOOL)a3;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)show;
- (void)updateUI;

@end
