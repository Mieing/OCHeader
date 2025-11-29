@class UIView, AWEMultiTabActivitySegmentModel;

@interface AWEMultiTabActivitySegmentButton : UIButton

@property (retain, nonatomic) AWEMultiTabActivitySegmentModel *segmentModel;
@property (retain, nonatomic) UIView *redBadge;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
