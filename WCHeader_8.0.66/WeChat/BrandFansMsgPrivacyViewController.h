@class UIStackView, UIView, NSString, WCBrandOverFullscreenAnimator, UIImageView, UIControl, UIButton, WXMASConstraint, MMUILabel, MMUIButton;

@interface BrandFansMsgPrivacyViewController : UIViewController <WCBrandOverFullscreenAnimatable, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIControl *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MMUIButton *moreButton;
@property (retain, nonatomic) WXMASConstraint *topConstraint;
@property (retain, nonatomic) WXMASConstraint *bottomConstraint;
@property (retain, nonatomic) WCBrandOverFullscreenAnimator *customAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showInController:(id)a0;

- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setupPanel;
- (void)setupAction;
- (void)onClickMask;
- (void)onClickConfirm;
- (void)onClickLearnMore;
- (void)updateLayoutForOverFullscreenPresentAnimationWithContainerView:(id)a0;
- (void)playOverFullscreenPresentAnimation;
- (void)playOverFullscreenDismissAnimation;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void).cxx_destruct;

@end
