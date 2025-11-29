@class IESSCMetalRenderingDevice, IESSCMetalImage;

@interface IESSCVideoTransitionRenderInfo : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (nonatomic) struct CGSize { double width; double height; } renderSize;
@property (nonatomic) double tweenFactor;
@property (retain, nonatomic) IESSCMetalRenderingDevice *renderingDevice;
@property (retain, nonatomic) IESSCMetalImage *targetImage;

- (void).cxx_destruct;

@end
