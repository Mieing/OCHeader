@class NSTimer, UIView, NSArray, NSString, UIImageView, IESLiveAnchorDialogModel, UILabel, IESLiveModalDialogAnimation;

@interface IESLiveAnchorDialog : UIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *textContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *actionContainer;
@property (copy, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) IESLiveAnchorDialogModel *model;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) IESLiveModalDialogAnimation *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerWithStyle:(unsigned long long)a0 seconds:(long long)a1 title:(id)a2 description:(id)a3 actionTexts:(id)a4 actions:(id)a5;

- (void)setupImageContainer;
- (void)setuptextContainer;
- (void)setupActionContainer;
- (void)setupB1UI;
- (void)updateB1UI;
- (void)updateB2UI;
- (void)actionButtonTouchUpInside:(id)a0;
- (void)setupContainerView;
- (id)initWithModel:(id)a0;
- (void)dismiss;
- (id)transitioningDelegate;
- (void).cxx_destruct;
- (long long)modalPresentationStyle;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidLoad;
- (void)setupTimer;
- (void)show;
- (void)countdown;
- (void)setupUI;

@end
