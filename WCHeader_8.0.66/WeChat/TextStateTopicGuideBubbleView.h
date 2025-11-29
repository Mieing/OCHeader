@class CAShapeLayer, MMUILabel, UIView;

@interface TextStateTopicGuideBubbleView : UIView

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) CAShapeLayer *bubbleLayer;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (nonatomic) struct CGPoint { double x; double y; } arrowPoint;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)refreshView;
- (void)didMoveToSuperview;
- (void).cxx_destruct;

@end
