@class NSArray, QArcOverlayAnimation, QArcStyle;

@interface QVisArcLineLayerPayload : QVisLayerPayload

@property (retain, nonatomic) QArcStyle *style;
@property (copy, nonatomic) NSArray *lines;
@property (retain, nonatomic) QArcOverlayAnimation *animation;

- (void).cxx_destruct;

@end
