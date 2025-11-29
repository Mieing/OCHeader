@class HTSGLContext, NSString, HTSGLFramebuffer;

@interface HTSRawDataOutput : NSObject <HTSGLInput> {
    struct CGSize { double width; double height; } _imageSize;
    unsigned long long _inputRotation;
    BOOL _outputBGRA;
    HTSGLFramebuffer *_firstInputFramebuffer;
    HTSGLFramebuffer *_outputFramebuffer;
    HTSGLFramebuffer *_retainedFramebuffer;
    BOOL _hasReadFromTheCurrentFrame;
    BOOL _lockNextFramebuffer;
    BOOL _lockInputFramebuffer;
    struct __CVBuffer { } *_pixelBuf;
}

@property (readonly) char *rawBytesForImage;
@property (copy, nonatomic) id /* block */ newFrameAvailableBlock;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) HTSGLContext *context;
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
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0 resultsInBGRAFormat:(BOOL)a1;
- (unsigned long long)bytesPerRowInOutput;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0 resultsInBGRAFormat:(BOOL)a1 context:(id)a2;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)pixelBuffer;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;

@end
