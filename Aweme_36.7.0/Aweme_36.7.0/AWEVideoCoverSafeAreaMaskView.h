@class CALayer, UILabel, UIView;

@interface AWEVideoCoverSafeAreaMaskView : UIView

@property (retain, nonatomic) CALayer *maskLayer1;
@property (retain, nonatomic) CALayer *maskLeyer2;
@property (retain, nonatomic) UIView *cropBorderView;
@property (retain, nonatomic) UILabel *hitLabel;
@property (nonatomic) struct CGSize { double width; double height; } aspectRatio;

- (void)setHitLabelHide:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_safeRect;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
