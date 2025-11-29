@class UILabel, UIImageView, NSTimer;

@interface AWESearchResultKiwiTimerTipsView : UIView

@property (retain, nonatomic) UILabel *tipsLab;
@property (retain, nonatomic) UIImageView *tipsIcon;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ countDownFinished;

- (void).cxx_destruct;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)show;

@end
