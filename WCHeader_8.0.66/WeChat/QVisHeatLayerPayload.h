@class NSArray, QAnimation, QHeatGradient;

@interface QVisHeatLayerPayload : QVisLayerPayload

@property (copy, nonatomic) NSArray *nodes;
@property (nonatomic) double minIntensity;
@property (nonatomic) double maxIntensity;
@property (nonatomic) long long decayRadius;
@property (retain, nonatomic) QHeatGradient *gradient;
@property (nonatomic) double maxHeight;
@property (retain, nonatomic) QAnimation *animation;

- (void).cxx_destruct;

@end
