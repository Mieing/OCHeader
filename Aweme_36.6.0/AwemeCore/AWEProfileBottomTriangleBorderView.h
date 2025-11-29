@class AWEProfileBorderUIConfig, CAShapeLayer;

@interface AWEProfileBottomTriangleBorderView : UIView

@property (retain, nonatomic) AWEProfileBorderUIConfig *uiConfig;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;

+ (id)viewWithConfigBlock:(id /* block */)a0;

- (void)addGradientBorder;
- (void)updateWithConfigBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)layoutSubviews;

@end
