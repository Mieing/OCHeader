@class UIButton, IESGCPPropAuthorizationViewModel, UIImageView, UILabel, UIView, YYLabel;

@interface IESGCPPropAuthorizationView : UIView

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UIImageView *backgroudImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) IESGCPPropAuthorizationViewModel *viewModel;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ rejectAction;
@property (copy, nonatomic) id /* block */ protocolAction;

+ (void)showAuthorizationViewWithDIContext:(id)a0 confirmAction:(id /* block */)a1 rejectAction:(id /* block */)a2 protocolAction:(id /* block */)a3;

- (void)bindViewModel:(id)a0;
- (void)reportIfShow;
- (struct CGSize { double x0; double x1; })contentViewRectWithIsLandscape:(BOOL)a0;
- (void)reportIfParticipate;
- (void)agreeParticipate;
- (void)rejectButtonAction:(id)a0 event:(id)a1;
- (void)confirmButtonAction:(id)a0 event:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)show;
- (void)setupView;
- (void)setupLayout;

@end
