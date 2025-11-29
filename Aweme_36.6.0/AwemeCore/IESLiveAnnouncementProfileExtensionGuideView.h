@class UIView, UILabel, UIImageView, IESLiveAnimatedImageView, IESLiveAnnouncementViewModel, UIViewController;

@interface IESLiveAnnouncementProfileExtensionGuideView : IESLiveAnnouncementPageView

@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) IESLiveAnimatedImageView *guideAnimatedView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *bodyContainerView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (copy, nonatomic) id /* block */ dismissBlock;

+ (long long)popupItemType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 viewController:(id)a2;
- (void)cancelDidTapped;
- (id)createButtons;
- (void)modifyOrderDidTapped;
- (void)closeDidTapped;
- (void).cxx_destruct;
- (void)show;
- (void)setupUI;
- (void)hideWithCompletion:(id /* block */)a0;
- (void)setupLayout;

@end
