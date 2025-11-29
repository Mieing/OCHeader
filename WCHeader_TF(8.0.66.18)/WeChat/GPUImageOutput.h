@class GLProgram, GPUImageFramebuffer, NSMutableArray, GPUImageMovieWriter;
@protocol GPUImageInput;

@interface GPUImageOutput : NSObject {
    GPUImageFramebuffer *outputFramebuffer;
    NSMutableArray *targets;
    NSMutableArray *targetTextureIndices;
    struct CGSize { double width; double height; } inputTextureSize;
    struct CGSize { double width; double height; } cachedMaximumOutputSize;
    struct CGSize { double width; double height; } forcedMaximumSize;
    BOOL overrideInputSize;
    BOOL allTargetsWantMonochromeData;
    BOOL usingNextFrameForImageCapture;
    BOOL isUseRGB2YUV420;
    BOOL enableConstantTexture;
    GPUImageFramebuffer *yuv420Framebuffer;
    GLProgram *rgb2LumaProgram;
    GLProgram *rgb2ChromaNVProgram;
}

@property (nonatomic) BOOL shouldSmoothlyScaleOutput;
@property (nonatomic) BOOL shouldIgnoreUpdatesToThisTarget;
@property (retain, nonatomic) GPUImageMovieWriter *audioEncodingTarget;
@property (nonatomic) id<GPUImageInput> targetToIgnoreForUpdates;
@property (copy, nonatomic) id /* block */ frameProcessingCompletionBlock;
@property (nonatomic) BOOL enabled;
@property (nonatomic) struct GPUTextureOptions { unsigned int minFilter; unsigned int magFilter; unsigned int wrapS; unsigned int wrapT; unsigned int internalFormat; unsigned int format; unsigned int type; BOOL useDepth; } outputTextureOptions;

- (id)init;
- (void)dealloc;
- (void)setInputFramebufferForTarget:(id)a0 atIndex:(long long)a1;
- (id)yuv420FramebufferForOutput;
- (void)removeYuv420Framebuffer;
- (void)initRGBtoYUV420Filter;
- (void)setRGB2YUV420Process:(BOOL)a0;
- (BOOL)isUseRGB2YUV420;
- (id)framebufferForOutput;
- (void)removeOutputFramebuffer;
- (void)notifyTargetsAboutNewOutputTexture;
- (id)targets;
- (void)addTarget:(id)a0;
- (void)addTarget:(id)a0 atTextureLocation:(long long)a1;
- (void)removeTarget:(id)a0;
- (void)removeAllTargets;
- (void)forceProcessingAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)useNextFrameForImageCapture;
- (struct CGImage { } *)newCGImageFromCurrentlyProcessedOutput;
- (struct CGImage { } *)newCGImageByFilteringCGImage:(struct CGImage { } *)a0;
- (BOOL)providesMonochromeOutput;
- (id)imageFromCurrentFramebuffer;
- (id)imageFromCurrentFramebufferWithOrientation:(long long)a0;
- (id)imageByFilteringImage:(id)a0;
- (struct CGImage { } *)newCGImageByFilteringImage:(id)a0;
- (void).cxx_destruct;

@end
