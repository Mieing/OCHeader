@class NSString, LSGLContext, LSGLFramebuffer, NSMutableArray;
@protocol LSGLInput;

@interface LSGLOutput : NSObject {
    LSGLFramebuffer *outputFramebuffer;
    long long _captureMs;
    NSMutableArray *targets;
    NSMutableArray *targetTextureIndices;
    struct CGSize { double width; double height; } inputTextureSize;
    struct CGSize { double width; double height; } cachedMaximumOutputSize;
    struct CGSize { double width; double height; } forcedMaximumSize;
    BOOL overrideInputSize;
    BOOL usingNextFrameForImageCapture;
}

@property (retain, nonatomic) LSGLContext *context;
@property (nonatomic) BOOL shouldSmoothlyScaleOutput;
@property (nonatomic) BOOL shouldIgnoreUpdatesToThisTarget;
@property (nonatomic) id<LSGLInput> targetToIgnoreForUpdates;
@property (copy, nonatomic) id /* block */ frameProcessingCompletionBlock;
@property (nonatomic) BOOL enabled;
@property (nonatomic) struct LSGPUTextureOptions { unsigned int minFilter; unsigned int magFilter; unsigned int wrapS; unsigned int wrapT; unsigned int internalFormat; unsigned int format; unsigned int type; unsigned int bind; } outputTextureOptions;
@property (retain, nonatomic) NSString *name;

- (void)setInputFramebufferForTarget:(id)a0 atIndex:(long long)a1;
- (id)framebufferForOutput;
- (void)removeAllTargets;
- (void)addTarget:(id)a0 atTextureLocation:(long long)a1;
- (id)imageFromCurrentFramebufferWithOrientation:(long long)a0;
- (struct CGImage { } *)newCGImageFromCurrentlyProcessedOutput;
- (struct CGImage { } *)newCGImageByFilteringCGImage:(struct CGImage { } *)a0;
- (void)notifyTargetsAboutNewOutputTexture;
- (void)forceProcessingAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)useNextFrameForImageCapture;
- (BOOL)providesMonochromeOutput;
- (id)imageFromCurrentFramebuffer;
- (id)imageByFilteringImage:(id)a0;
- (struct CGImage { } *)newCGImageByFilteringImage:(id)a0;
- (void)removeOutputFramebuffer;
- (id)dumpNodes:(id)a0 level:(int)a1;
- (void)updateCaptureMs:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)targets;
- (void)dealloc;
- (void)addTarget:(id)a0;
- (void)removeTarget:(id)a0;

@end
