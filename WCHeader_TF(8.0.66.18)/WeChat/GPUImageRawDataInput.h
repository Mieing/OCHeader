@class GPUImageFramebuffer, NSMutableDictionary, NSObject, GLProgram;
@protocol OS_dispatch_semaphore;

@interface GPUImageRawDataInput : GPUImageOutput {
    struct CGSize { double width; double height; } uploadedImageSize;
    struct CGSize { double width; double height; } uploadedChromaSize;
    GPUImageFramebuffer *inputLumaTexture;
    GPUImageFramebuffer *inputChromaTexture;
    NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;
    GLProgram *convertColorProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    BOOL isEndProcessing;
    BOOL useYUV420toRGB;
    struct CGSize { double width; double height; } currentFilterSize;
    unsigned long long inputRotation;
    BOOL currentlyReceivingMonochromeInput;
    NSMutableDictionary *uniformStateRestorationBlocks;
    NSObject<OS_dispatch_semaphore> *imageCaptureSemaphore;
}

@property (nonatomic) int pixelFormat;
@property (nonatomic) int pixelType;

- (id)initWithBytes:(char *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithBytes:(char *)a0 size:(struct CGSize { double x0; double x1; })a1 pixelFormat:(int)a2;
- (id)initWithBytes:(char *)a0 size:(struct CGSize { double x0; double x1; })a1 pixelFormat:(int)a2 type:(int)a3;
- (void)initYUVtoRGB:(BOOL)a0;
- (void)initYUVtoRGBConversin;
- (void)dealloc;
- (void)initializeAttributes;
- (id)renderYUV420toRGB:(unsigned int)a0 ChromaTexture:(unsigned int)a1;
- (void)uploadBytes:(char *)a0;
- (void)uploadBytes:(char *)a0 NeedRender420ToRGB:(BOOL)a1;
- (void)updateDataFromBytes:(char *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)processData;
- (void)processDataForTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGSize { double x0; double x1; })outputImageSize;
- (void).cxx_destruct;

@end
