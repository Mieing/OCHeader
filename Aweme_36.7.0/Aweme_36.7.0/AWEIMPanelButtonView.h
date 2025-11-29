@class UIButton, UIStackView;

@interface AWEIMPanelButtonView : AWEIMPanelView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIButton *primaryButton;
@property (retain, nonatomic) UIButton *secondaryButton;

- (void)renderWithViewModel:(id)a0;
- (void)primaryButtonPressed:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)secondaryButtonPressed:(id)a0;

@end
