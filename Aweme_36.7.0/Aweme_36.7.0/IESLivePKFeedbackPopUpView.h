@class IESLiveRevenueInteractFeedbackView, IESLiveRevenueInteractFeedbackViewModel, UILabel, UIView, UIButton;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKFeedbackPopUpView : HTSLivePopUpView

@property (nonatomic) BOOL needMask;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *commitButton;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackView *feedbackView;
@property (retain, nonatomic) IESLiveRevenueInteractFeedbackViewModel *viewModel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;

- (void)didSetAttachingDIContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 needMask:(BOOL)a2;
- (void)dismissFeedbackView;
- (void)didTapCommitButton;
- (void)didSelectedFeedbackCategory;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)setup;
- (void)layoutUI;

@end
