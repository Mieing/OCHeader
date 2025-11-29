@class NSObject, NSString, NSMutableDictionary, LSGLContext, LSGLFramebuffer, LSGLProgram;
@protocol OS_dispatch_semaphore;

@interface LSGLFilter : LSGLOutput <LSGLInput> {
    LSGLFramebuffer *firstInputFramebuffer;
    LSGLProgram *filterProgram;
    int filterPositionAttribute;
    int filterTextureCoordinateAttribute;
    int filterInputTextureUniform;
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    BOOL isEndProcessing;
    struct CGSize { double width; double height; } currentFilterSize;
    unsigned long long inputRotation;
    NSMutableDictionary *uniformStateRestorationBlocks;
    NSObject<OS_dispatch_semaphore> *imageCaptureSemaphore;
}

@property struct __CVBuffer { } *renderTarget;
@property (nonatomic) BOOL preventRendering;
@property (nonatomic) BOOL currentlyReceivingMonochromeInput;
@property (nonatomic) struct CGSize { double width; double height; } outputFrameSize;
@property (retain, nonatomic) LSGLContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const float *)textureCoordinatesForRotation:(unsigned long long)a0;

- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (struct CGSize { double x0; double x1; })rotatedSize:(struct CGSize { double x0; double x1; })a0 forIndex:(long long)a1;
- (void)setupFilterForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColorRed:(float)a0 green:(float)a1 blue:(float)a2 alpha:(float)a3;
- (void)setInteger:(int)a0 forUniformName:(id)a1;
- (void)setFloat:(float)a0 forUniformName:(id)a1;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 forUniformName:(id)a1;
- (void)setPoint:(struct CGPoint { double x0; double x1; })a0 forUniformName:(id)a1;
- (void)setFloatVec3:(struct LSGPUVector3 { float x0; float x1; float x2; })a0 forUniformName:(id)a1;
- (void)setFloatVec4:(struct LSGPUVector4 { float x0; float x1; float x2; float x3; })a0 forUniform:(id)a1;
- (void)setFloatArray:(float *)a0 length:(int)a1 forUniform:(id)a2;
- (struct CGImage { } *)newCGImageFromCurrentlyProcessedOutput;
- (void)forceProcessingAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)useNextFrameForImageCapture;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeOfFBO;
- (id)initWithVertexShaderFromString:(id)a0 fragmentShaderFromString:(id)a1 context:(id)a2;
- (void)setInteger:(int)a0 forUniform:(int)a1 program:(id)a2;
- (void)setFloat:(float)a0 forUniform:(int)a1 program:(id)a2;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 forUniform:(int)a1 program:(id)a2;
- (void)setPoint:(struct CGPoint { double x0; double x1; })a0 forUniform:(int)a1 program:(id)a2;
- (void)setVec3:(struct LSGPUVector3 { float x0; float x1; float x2; })a0 forUniform:(int)a1 program:(id)a2;
- (void)setVec4:(struct LSGPUVector4 { float x0; float x1; float x2; float x3; })a0 forUniform:(int)a1 program:(id)a2;
- (void)setFloatArray:(float *)a0 length:(int)a1 forUniform:(int)a2 program:(id)a3;
- (void)setAndExecuteUniformStateCallbackAtIndex:(int)a0 forProgram:(id)a1 toBlock:(id /* block */)a2;
- (id)initWithFragmentShaderFromFile:(id)a0;
- (void)setMatrix3f:(struct LSGPUMatrix3x3 { struct LSGPUVector3 { float x0; float x1; float x2; } x0; struct LSGPUVector3 { float x0; float x1; float x2; } x1; struct LSGPUVector3 { float x0; float x1; float x2; } x2; })a0 forUniform:(int)a1 program:(id)a2;
- (void)setMatrix4f:(struct LSGPUMatrix4x4 { struct LSGPUVector4 { float x0; float x1; float x2; float x3; } x0; struct LSGPUVector4 { float x0; float x1; float x2; float x3; } x1; struct LSGPUVector4 { float x0; float x1; float x2; float x3; } x2; struct LSGPUVector4 { float x0; float x1; float x2; float x3; } x3; })a0 forUniform:(int)a1 program:(id)a2;
- (void)setPointArray:(struct CGPoint { double x0; double x1; } *)a0 length:(int)a1 forUniform:(int)a2 program:(id)a3;
- (void)setIntegerArray:(int *)a0 length:(int)a1 forUniform:(int)a2 program:(id)a3;
- (struct CGPoint { double x0; double x1; })rotatedPoint:(struct CGPoint { double x0; double x1; })a0 forRotation:(unsigned long long)a1;
- (id)initWithFragmentShaderFromString:(id)a0 context:(id)a1;
- (void)setUniformsForProgramAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)dealloc;
- (void)initializeAttributes;
- (id)initWithFragmentShaderFromString:(id)a0;
- (id)initWithVertexShaderFromString:(id)a0 fragmentShaderFromString:(id)a1;
- (void)startProcessing;

@end
