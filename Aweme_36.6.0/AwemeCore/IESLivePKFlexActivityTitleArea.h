@class TitleArea, IESLivePKFlexActivityPanelViewModel, UIImageView, UILabel, IESLivePKFlexActivityCountDownView, UIButton;

@interface IESLivePKFlexActivityTitleArea : UIView

@property (retain, nonatomic) TitleArea *area;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *registerButton;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *ruleIconView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) IESLivePKFlexActivityCountDownView *countDownContainerView;
@property (retain, nonatomic) IESLivePKFlexActivityPanelViewModel *viewModel;

- (void)trackClickEvent;
- (void)setupCountDownView:(id)a0;
- (id)initWithDIContext:(id)a0 viewModel:(id)a1 areaIndex:(unsigned long long)a2;
- (void)onClickedRuleIcon;
- (void)onClickedRegisterButton;
- (void).cxx_destruct;
- (void)layoutUI;

@end
