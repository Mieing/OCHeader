@interface IESGCPXPlayCameraVideoFrame : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) long long rotation;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;

@end
