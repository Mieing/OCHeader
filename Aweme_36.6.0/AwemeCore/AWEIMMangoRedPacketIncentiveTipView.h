@class UIImageView, UILabel, UIView;

@interface AWEIMMangoRedPacketIncentiveTipView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *bgColorView;

- (void)renderWithViewConfig:(id)a0;
- (id)p_textFont;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
