@class NSData;

@interface IESLiveLinkVideoFrame : IESLiveLinkFrame

@property long long bufferType;
@property int width;
@property int height;
@property long long rotation;
@property long long pixelFormat;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property struct __CVBuffer { } *cvpixelbuffer;
@property (retain) NSData *seiData;
@property (retain) NSData *roiData;

- (void).cxx_destruct;

@end
