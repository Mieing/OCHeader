@class CALayer;

@interface AWENewVideoCoverEditSelectHintView : UIView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) CALayer *outerBorderLayer;
@property (retain, nonatomic) CALayer *innerBorderLayer;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
