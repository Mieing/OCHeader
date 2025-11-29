@class CAShapeLayer;

@interface AWEProgressTrackLayer : CAShapeLayer

@property (nonatomic) double circleWidth;
@property (retain, nonatomic) CAShapeLayer *defaultTrackLayer;

- (void).cxx_destruct;
- (id)initWithSize:(double)a0;
- (void)layoutSublayers;
- (void)setup;

@end
