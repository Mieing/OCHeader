@class NSString, HTSGLContext, HTSGLFramebuffer, NSMutableArray;
@protocol HTSGLInput;

@interface HTSFilterInterface : NSObject {
    HTSGLFramebuffer *_outputFramebuffer;
    HTSGLFramebuffer *_secondaryOutputFramebuffer;
    NSMutableArray *_targets;
    NSMutableArray *_targetTextureIndices;
    struct CGSize { double width; double height; } _inputTextureSize;
    struct CGSize { double width; double height; } _cachedMaximumOutputSize;
    struct CGSize { double width; double height; } _forcedMaximumSize;
    BOOL _overrideInputSize;
    BOOL _allTargetsWantMonochromeData;
    BOOL _usingNextFrameForImageCapture;
}

@property (nonatomic) unsigned long long originVideoRotation;
@property (nonatomic) struct CGSize { double width; double height; } originVideoNaturalSize;
@property (nonatomic) struct CGSize { double width; double height; } maxFrameSize;
@property (nonatomic) BOOL mimoMode;
@property (nonatomic) struct CGSize { double width; double height; } secondaryOutputSize;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) long long mediaType;
@property (nonatomic) BOOL shouldSmoothlyScaleOutput;
@property (nonatomic) BOOL shouldIgnoreUpdatesToThisTarget;
@property (nonatomic) id<HTSGLInput> targetToIgnoreForUpdates;
@property (copy, nonatomic) id /* block */ frameProcessingCompletionBlock;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *filterID;
@property (nonatomic) long long videoTrackId;

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
- (struct CGImage { } *)newCGImageFromCurrentlyProcessedOutput:(struct __CFString { } *)a0;
- (id)imageFromCurrentFramebufferWithOrientation:(long long)a0 colorSpaceName:(struct __CFString { } *)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)targets;
- (void)dealloc;
- (void)addTarget:(id)a0;
- (void)removeTarget:(id)a0;

@end
