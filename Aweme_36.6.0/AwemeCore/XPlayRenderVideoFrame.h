@class NSData;

@interface XPlayRenderVideoFrame : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) long long rotation;
@property (nonatomic) long long contentType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (retain, nonatomic) NSData *extendedData;

- (void).cxx_destruct;

@end
