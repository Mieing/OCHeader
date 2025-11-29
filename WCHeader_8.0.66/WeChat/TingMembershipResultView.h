@class UIImageView, UILabel, UIView, UIButton;

@interface TingMembershipResultView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ confirmHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configLayout;
- (void)layoutSubviews;
- (void)updateDisplayWithIconName:(id)a0 title:(id)a1 desc:(id)a2 btnText:(id)a3;
- (void)actionButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
