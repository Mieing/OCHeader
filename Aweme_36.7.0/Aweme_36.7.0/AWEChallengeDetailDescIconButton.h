@class YYLabel, UIImageView;

@interface AWEChallengeDetailDescIconButton : UIView

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (nonatomic) double recommendWidth;

- (void)bindText:(id)a0 andIcon:(id)a1;
- (void)bindMixDescText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
