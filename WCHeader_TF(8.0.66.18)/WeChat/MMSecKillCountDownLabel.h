@class UILabel, MMCountDownLabel, UIView;

@interface MMSecKillCountDownLabel : UIView

@property (readonly, nonatomic) UIView *line;
@property (readonly, nonatomic) UILabel *suffixLabel;
@property (readonly, nonatomic) MMCountDownLabel *countDownLabel;

+ (double)widthWithSuffix:(id)a0 font:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
