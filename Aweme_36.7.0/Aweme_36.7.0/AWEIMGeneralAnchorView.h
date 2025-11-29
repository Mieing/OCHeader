@class UIStackView, UIImageView, UILabel, AWEIMHighlightControl;

@interface AWEIMGeneralAnchorView : UIView

@property (retain, nonatomic) AWEIMHighlightControl *anchorView;
@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ tappedAction;

- (void)p_setupView;
- (void)p_anchorViewTapped;
- (void)configWithIconName:(id)a0 title:(id)a1;
- (void)makeAnchorViewHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
