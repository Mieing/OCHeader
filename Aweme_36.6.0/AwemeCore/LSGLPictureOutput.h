@class NSString, LSGLContext, LSGLFramebuffer, LSGLProgram;
@protocol LSGLPictureOutputDelegate;

@interface LSGLPictureOutput : NSObject <LSGLInput> {
    LSGLProgram *_swizzleProgram;
    int _swizzlePositionAttribute;
    int _swizzleTextureCoordinateAttribute;
    int _swizzleInputTextureUniform;
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    struct __CVBuffer { } *_renderTarget;
    struct __CVBuffer { } *_renderYUVTarget;
    struct __CVBuffer { } *_renderTexture;
    float _cropTextureCoordinates[8];
    float _squareVertices[8];
    BOOL _needUpdateOutputSizeFromInput;
    struct CGSize { double width; double height; } _lastInputSize;
    struct CGSize { double width; double height; } _lastOutputSize;
}

@property (retain, nonatomic) LSGLContext *gpuContext;
@property (retain, nonatomic) LSGLFramebuffer *inputFrameBuffer;
@property (retain, nonatomic) LSGLFramebuffer *outputFrameBuffer;
@property (retain, nonatomic) LSGLContext *gpuContext;
@property (retain, nonatomic) LSGLFramebuffer *inputFrameBuffer;
@property (retain, nonatomic) LSGLFramebuffer *outputFrameBuffer;
@property (readonly, nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) unsigned long long outputRotation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) BOOL enabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRegion;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } vertexRect;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL skipRender;
@property (weak, nonatomic) id<LSGLPictureOutputDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)needRender:(BOOL)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)updateCropTextureCoordinate;
- (id)initWithOutputFormat:(unsigned int)a0 needUpdateOutputSizeFromInput:(BOOL)a1;
- (id)getFragmentShader;
- (void)destroyFBO;
- (void)convertToI420;
- (void)outputFrameBufferAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)renderToFramebuffer:(id)a0;
- (void)updateConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
