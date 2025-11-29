@class UIStackView, UIImageView, UILabel, UIView, AWEIMHighlightControl;

@interface AWEIMImageIronManAnchorView : UIView

@property (retain, nonatomic) AWEIMHighlightControl *anchorView;
@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (copy, nonatomic) id /* block */ tappedAction;

- (void)p_setupView;
- (void)p_anchorViewTapped;
- (void)configWithIconUrl:(id)a0 title:(id)a1 prefix:(id)a2 placeholderName:(id)a3;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
