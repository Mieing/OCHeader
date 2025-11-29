@class VEMVPRenderer, NSString, HTSGLContext, HTSGLFramebuffer;

@interface HTSRawDataOutputRender : NSObject <HTSGLInput> {
    struct CGSize { double width; double height; } _imageSize;
    unsigned long long _inputRotation;
    BOOL _outputBGRA;
    HTSGLFramebuffer *_originalFramebuffer;
    BOOL _hasReadFromTheCurrentFrame;
    BOOL _lockNextFramebuffer;
    BOOL _lockOutFramebuffer;
    struct __CVBuffer { } *_pixelBuf;
    BOOL _enable10bitRT;
}

@property (retain, nonatomic) VEMVPRenderer *textureMvpRenderer;
@property (readonly) char *rawBytesForImage;
@property (copy, nonatomic) id /* block */ newFrameAvailableBlock;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) HTSGLContext *context;
@property (readonly, nonatomic) HTSGLFramebuffer *redrawedFramebuffer;
@property (nonatomic) struct __CVBuffer { } *externalPixelBuffer;
@property (nonatomic) BOOL useNOcacheFrameBuffer;
@property (nonatomic) BOOL enableMultiTrack;
@property (readonly) NSString *route;
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
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (BOOL)wantsMonochromeInput;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)a0;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0 resultsInBGRAFormat:(BOOL)a1;
- (void)renderAtInternalSize;
- (struct GPUByteColorVector { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })colorAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)getOriginalFramebuffer;
- (id)getRedrawedFrameBuffer;
- (id)getOutputFramebuffer;
- (struct __CVBuffer { } *)getRedrawedPixelBuffer;
- (struct __CVBuffer { } *)getOriginalPixelBuffer;
- (void)unlockOriginalFramebuffer;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0 resultsInBGRAFormat:(BOOL)a1 context:(id)a2;
- (void).cxx_destruct;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;

@end
