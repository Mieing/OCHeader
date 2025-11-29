@class AVVideoComposition, IESSCMetalRenderingDevice, IESSCMetalImage;

@interface IESSCVideoTimelineRenderInfo : NSObject

@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) IESSCMetalRenderingDevice *renderingDevice;
@property (retain, nonatomic) IESSCMetalImage *targetImage;

- (void).cxx_destruct;
- (id)initWithVideoComposition:(id)a0;

@end
