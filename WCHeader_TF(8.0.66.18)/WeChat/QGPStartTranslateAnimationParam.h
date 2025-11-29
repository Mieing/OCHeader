@class NSArray;

@interface QGPStartTranslateAnimationParam : QGPBaseModel

@property (retain, nonatomic) NSArray *positions;
@property (nonatomic) double duration;
@property (nonatomic) double initRotation;
@property (nonatomic) BOOL needRotate;

- (void).cxx_destruct;

@end
