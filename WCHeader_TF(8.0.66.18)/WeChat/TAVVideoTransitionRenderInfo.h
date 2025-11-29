@interface TAVVideoTransitionRenderInfo : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) double tweenFactor;

@end
