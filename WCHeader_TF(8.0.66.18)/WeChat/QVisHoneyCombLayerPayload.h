@class NSArray, QAnimation, QVectorHeatOverlayOption;

@interface QVisHoneyCombLayerPayload : QVisLayerPayload

@property (copy, nonatomic) NSArray *nodes;
@property (nonatomic) double minIntensity;
@property (nonatomic) double maxIntensity;
@property (retain, nonatomic) QAnimation *animation;
@property (nonatomic) QVectorHeatOverlayOption *option;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *startPoints;
@property (nonatomic) int type;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;
@property (nonatomic) double size;
@property (nonatomic) double gap;

- (void).cxx_destruct;

@end
