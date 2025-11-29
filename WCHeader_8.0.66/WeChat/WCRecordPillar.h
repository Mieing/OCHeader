@class CALayer, UIColor, CAShapeLayer;

@interface WCRecordPillar : NSObject

@property (weak, nonatomic) CALayer *superLayer;
@property (nonatomic) double pillarWidth;
@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL bSelectedShowHigher;
@property (nonatomic) double pillarHeight;
@property (retain, nonatomic) CAShapeLayer *layer;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) float lastStartTo;
@property (nonatomic) float lastEndTo;

- (id)initWithIndex:(unsigned int)a0 SuperLayer:(id)a1 color:(id)a2 lineWidth:(double)a3;
- (id)getShapeLayer;
- (void)dynamicSetPillarColor:(id)a0;
- (void).cxx_destruct;

@end
