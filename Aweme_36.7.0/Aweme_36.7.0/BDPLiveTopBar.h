@class UIButton, CAGradientLayer;

@interface BDPLiveTopBar : UIView

@property (retain, nonatomic) CAGradientLayer *bgLayer;
@property (retain, nonatomic) UIButton *screenCastButton;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ screenCastClickAction;

- (void)screenCastButtonClicked;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;

@end
