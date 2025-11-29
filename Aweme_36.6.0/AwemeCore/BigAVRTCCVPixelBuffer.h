@class NSString;

@interface BigAVRTCCVPixelBuffer : NSObject <RTCVideoFrameBuffer> {
    int _width;
    int _height;
    int _bufferWidth;
    int _bufferHeight;
    int _cropWidth;
    int _cropHeight;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned int textureID;
@property (readonly, nonatomic) unsigned int luminanceTextureID;
@property (readonly, nonatomic) unsigned int chrominanceTextureID;
@property (readonly, nonatomic) unsigned int uTextureID;
@property (readonly, nonatomic) unsigned int vTextureID;
@property (readonly, nonatomic) int cropX;
@property (readonly, nonatomic) int cropY;
@property (readonly, nonatomic) int bufferWidth;
@property (readonly, nonatomic) int bufferHeight;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedPixelFormats;

- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 andLuminanceTexture:(unsigned int)a1 andChrominanceTexture:(unsigned int)a2 adaptedWidth:(int)a3 adaptedHeight:(int)a4 cropWidth:(int)a5 cropHeight:(int)a6 cropX:(int)a7 cropY:(int)a8;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 andTexture:(unsigned int)a1 adaptedWidth:(int)a2 adaptedHeight:(int)a3 cropWidth:(int)a4 cropHeight:(int)a5 cropX:(int)a6 cropY:(int)a7;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 andLuminanceTexture:(unsigned int)a1 andChrominanceTexture:(unsigned int)a2 andChromaTexture:(unsigned int)a3 adaptedWidth:(int)a4 adaptedHeight:(int)a5 cropWidth:(int)a6 cropHeight:(int)a7 cropX:(int)a8 cropY:(int)a9;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 andLuminanceTexture:(unsigned int)a1 andChrominanceTexture:(unsigned int)a2;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 andTexture:(unsigned int)a1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 andLuminanceTexture:(unsigned int)a1 andChrominanceTexture:(unsigned int)a2 andChromaTexture:(unsigned int)a3;
- (void)dealloc;
- (id)toI420;
- (BOOL)requiresCropping;
- (BOOL)requiresScalingToWidth:(int)a0 height:(int)a1;
- (int)bufferSizeForCroppingAndScalingToWidth:(int)a0 height:(int)a1;
- (BOOL)cropAndScaleTo:(struct __CVBuffer { } *)a0 withTempBuffer:(char *)a1;
- (void)cropAndScaleARGBTo:(struct __CVBuffer { } *)a0;

@end
