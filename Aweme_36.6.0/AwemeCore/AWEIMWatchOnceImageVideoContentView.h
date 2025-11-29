@class AWEIMWatchOnceImageVideoContentProps, AWEIMShapeView, UIImageView, YYLabel;

@interface AWEIMWatchOnceImageVideoContentView : UIView

@property (retain, nonatomic) AWEIMWatchOnceImageVideoContentProps *props;
@property (retain, nonatomic) AWEIMShapeView *watchEndView;
@property (retain, nonatomic) AWEIMShapeView *beforeWatchView;
@property (retain, nonatomic) YYLabel *watchEndLabel;
@property (retain, nonatomic) YYLabel *beforeWatchLabel;
@property (retain, nonatomic) UIImageView *watchEndIconView;
@property (retain, nonatomic) UIImageView *beforeWatchIconView;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap:(id)a0;
- (id)beforeWatchLayer;
- (id)watchEndLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
