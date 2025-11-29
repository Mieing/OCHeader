@class UIColor;

@interface IESLiveKTVCountdownView : UIView

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long viewIndex;

- (void)updateView:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 count:(long long)a1 width:(double)a2 color:(id)a3;
- (void).cxx_destruct;

@end
