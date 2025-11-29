@class UIStackView, UIView, NSString, WCBrandOverFullscreenAnimator, UIImageView, UIControl, WXMASConstraint, UIButton, UILabel;

@interface BrandAppDownloadViewController : UIViewController <WCBrandOverFullscreenAnimatable, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIImageView *appIconImageView;
@property (retain, nonatomic) UIView *appIconView;
@property (retain, nonatomic) UIStackView *infoStackView;
@property (retain, nonatomic) UILabel *appNameLabel;
@property (retain, nonatomic) UILabel *appInfoLabel;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *operationButton;
@property (retain, nonatomic) UIControl *maskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) WXMASConstraint *topConstraint;
@property (retain, nonatomic) WXMASConstraint *bottomConstraint;
@property (retain, nonatomic) WCBrandOverFullscreenAnimator *customAnimator;
@property (copy, nonatomic) NSString *panelTitle;
@property (copy, nonatomic) NSString *panelDesc;
@property (nonatomic) double titleTopInset;
@property (copy, nonatomic) NSString *operationTitle;
@property (copy, nonatomic) NSString *cancelTitle;
@property (copy, nonatomic) id /* block */ onClickOperation;
@property (copy, nonatomic) id /* block */ onCancelOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupPanel;
- (void)setupAction;
- (void)didClickMask;
- (void)didClickCancelButton;
- (void)didClickOperation;
- (void)updateLayoutForOverFullscreenPresentAnimationWithContainerView:(id)a0;
- (void)playOverFullscreenPresentAnimation;
- (void)playOverFullscreenDismissAnimation;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void).cxx_destruct;

@end
