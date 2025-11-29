@class UIButton, UITapGestureRecognizer, UIView, AWEEnterpriseContentEvaluateViewModel, YYLabel;

@interface AWEEnterpriseContentEvaluateView : AWEEnterpriseMessageBaseView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIButton *unsolvedButton;
@property (retain, nonatomic) UIButton *solvedButton;
@property (weak, nonatomic) AWEEnterpriseContentEvaluateViewModel *viewModel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;

+ (double)heightWithoutText;

- (void)bindViewModel:(id)a0;
- (void)constraintSubviews;
- (double)scaledPreferredMaxLayoutWidth;
- (id)createButtonWithTitle:(id)a0 imageName:(id)a1;
- (void)tapUnsolved;
- (void)tapSolved;
- (void)p_createButtons;
- (void)setButtonsStatus;
- (double)widthWithoutText;
- (void).cxx_destruct;
- (void)setupUI;
- (void)disableButtons;

@end
