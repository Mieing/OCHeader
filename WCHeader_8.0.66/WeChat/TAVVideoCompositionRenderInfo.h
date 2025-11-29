@interface TAVVideoCompositionRenderInfo : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

@end
