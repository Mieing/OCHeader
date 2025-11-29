@class MMBaseTimeLabel, NSDate;

@interface MMCountDownLabel : UIView

@property (readonly, nonatomic) MMBaseTimeLabel *baseTimeLabel;
@property (retain, nonatomic) NSDate *targetTime;
@property (copy, nonatomic) id /* block */ arriveTargetTime;

- (void)updateTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
