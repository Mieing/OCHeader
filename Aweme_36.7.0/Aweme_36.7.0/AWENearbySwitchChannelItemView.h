@class UILabel, UIImageView;

@interface AWENearbySwitchChannelItemView : UIView

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIImageView *rightIconView;

- (void)updateTitle:(id)a0 textColor:(id)a1 leftIcon:(id)a2 rightIcon:(id)a3 feedType:(long long)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
