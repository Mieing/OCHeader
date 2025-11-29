@class NSString, UIImageView, CAShapeLayer, UIView, MMUILabel;

@interface WCSpringWishBubbleView : UIView

@property (retain, nonatomic) UIImageView *firecrackerView;
@property (retain, nonatomic) MMUILabel *greetingLabel;
@property (retain, nonatomic) CAShapeLayer *bubbleLayer;
@property (retain, nonatomic) UIView *bubbleView;
@property (nonatomic) double arrowPosition;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) double maxWidth;

- (id)init;
- (void)initViews;
- (double)calculateHeight;
- (double)calculateWidth;
- (void)layoutSubviews;
- (id)generateArrowLayer:(double)a0;
- (void)configSpringBubbleDataReport;
- (void).cxx_destruct;

@end
