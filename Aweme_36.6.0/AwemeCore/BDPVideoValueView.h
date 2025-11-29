@class UIImageView, NSString, UIView;

@interface BDPVideoValueView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *valueBgView;
@property (retain, nonatomic) UIView *fillView;
@property (nonatomic) double value;
@property (retain, nonatomic) NSString *imageName;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)updateValue:(double)a0;

@end
