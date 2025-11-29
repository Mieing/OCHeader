@class NSData;

@interface XPlayFrame : NSObject

@property (nonatomic) struct __CVBuffer { } *cvpixelbuffer;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) long long rotation;
@property (nonatomic) long long bufferType;
@property (nonatomic) long long contentType;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (retain, nonatomic) NSData *seiData;
@property (readonly, nonatomic) unsigned long long frameIndex;

- (void)retainRef;
- (id)initWithRTCFrame:(id)a0;
- (id)initWithLMFrame:(id)a0;
- (void)releaseRef;
- (void).cxx_destruct;

@end
