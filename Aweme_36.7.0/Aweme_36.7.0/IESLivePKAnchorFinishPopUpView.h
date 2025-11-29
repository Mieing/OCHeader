@class IESLiveRevenueInteractFeedbackView, IESLiveRevenueInteractFeedbackViewModel, UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKAnchorFinishPopUpView : HTSLivePopUpView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *oncemoreButton;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackView *feedbackView;
@property (retain, nonatomic) UIView *selectContainer;
@property (retain, nonatomic) UIImageView *selectIcon;
@property (retain, nonatomic) UILabel *selectTip;
@property (retain, nonatomic) UIView *gameSelectView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *unfoldButton;
@property (retain, nonatomic) UIImageView *hintImage;
@property (nonatomic) long long endReason;
@property (nonatomic) BOOL enableMatchOpt;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackViewModel *viewModel;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (void)didTapConfirmButton;
- (BOOL)isPKing;
- (void)didTapUnfoldButton;
- (void)didTapOneInOneOnceMoreButton;
- (void)didTapRematchButton;
- (void)didSelectCategory:(BOOL)a0;
- (void)checkConfirmButtonStatus;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 diContext:(id)a2 confirmBlock:(id /* block */)a3;
- (void)didTapSelectContainer;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)setup;
- (void)didTapCancelButton;
- (void)layoutUI;

@end
