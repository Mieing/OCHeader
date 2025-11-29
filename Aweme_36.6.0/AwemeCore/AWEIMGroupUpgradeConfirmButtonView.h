@class UIStackView, AWEIMGroupUpgradeConfirmButtonViewModel, UIView, UIButton;
@protocol IESIMDescriptionViewProtocol;

@interface AWEIMGroupUpgradeConfirmButtonView : UIView

@property (retain, nonatomic) UIButton *leftOptionButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView<IESIMDescriptionViewProtocol> *confirmTipView;
@property (retain, nonatomic) UIStackView *buttonContainer;
@property (retain, nonatomic) AWEIMGroupUpgradeConfirmButtonViewModel *viewModel;

- (void)p_bindVM;
- (void)p_layoutSubViews;
- (void)__commitConfirmAction;
- (void)__leftButtonAction;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
