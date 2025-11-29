@class NSData;

@interface VeLivePlayerVideoFrame : NSObject

@property (nonatomic) struct __CVBuffer { } *originalPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) long long bufferType;
@property (readonly, nonatomic) long long pixelFormat;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) long long pts;

- (id)getPixelBufferAttributes:(unsigned int)a0 heigth:(int)a1 width:(int)a2;
- (id)createI420DataFromPixelBuffer;
- (id)createNV12DataFromPixelBuffer;
- (id)createNSDataFromeCVPixelBuffer;
- (void)initialVideoFrameParamter;
- (struct opaqueCMSampleBuffer { } *)createSampleBuffer;
- (id)createData;
- (unsigned int)targetPixelBufferPixelFormat;
- (struct __CVBuffer { } *)transformToTargetPixelformat:(unsigned int)a0 targetPixlFormat:(unsigned int)a1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 bufferType:(long long)a1 pixelFormat:(long long)a2 pts:(long long)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
