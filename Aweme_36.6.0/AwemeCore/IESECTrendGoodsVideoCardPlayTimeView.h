@class UIImageView, UILabel;

@interface IESECTrendGoodsVideoCardPlayTimeView : UIView

@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UILabel *timeLabel;

- (void)setPlayDuration:(id)a0;
- (void).cxx_destruct;
- (id)formatDuration:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
