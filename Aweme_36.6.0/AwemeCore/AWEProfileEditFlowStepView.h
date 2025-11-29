@class UIStackView, AFDButton, AWEProfileEditFlowStepViewModel, MASConstraint, UILabel, UIView, UIButton;

@interface AWEProfileEditFlowStepView : AWEProfileEditFlowView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (retain, nonatomic) AFDButton *prevButton;
@property (retain, nonatomic) AFDButton *nextButton;
@property (retain, nonatomic) UIView *bodyView;
@property (retain, nonatomic) AWEProfileEditFlowStepViewModel *viewModel;
@property (retain, nonatomic) MASConstraint *bodyViewBottomConstraint;
@property (retain, nonatomic) MASConstraint *bodyViewBottomConstraintForButtonsHidden;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL buttonsHidden;

- (void)tapNextButton:(id)a0;
- (void)setButtonsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)tapPrevButton:(id)a0;
- (void)tapCloseButton:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear:(BOOL)a0;

@end
