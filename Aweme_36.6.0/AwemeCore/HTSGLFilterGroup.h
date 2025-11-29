@class HTSFilterInterface, NSArray, NSString, HTSGLContext, NSMutableArray;
@protocol HTSGLInput;

@interface HTSGLFilterGroup : HTSFilterInterface <HTSGLInput> {
    NSMutableArray *_filters;
    BOOL _isEndProcessing;
}

@property (retain, nonatomic) HTSFilterInterface<HTSGLInput> *terminalFilter;
@property (retain, nonatomic) NSArray *initialFilters;
@property (retain, nonatomic) HTSFilterInterface<HTSGLInput> *inputFilterToIgnoreForUpdates;
@property (readonly) HTSGLContext *context;
@property (readonly) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageNamed:(id)a0;

- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (id)framebufferForOutput;
- (void)setFilterID:(id)a0;
- (void)removeAllTargets;
- (void)addTarget:(id)a0 atTextureLocation:(long long)a1;
- (struct CGImage { } *)newCGImageFromCurrentlyProcessedOutput;
- (void)forceProcessingAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)useNextFrameForImageCapture;
- (void)setTargetToIgnoreForUpdates:(id)a0;
- (void)setFrameProcessingCompletionBlock:(id /* block */)a0;
- (id /* block */)frameProcessingCompletionBlock;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)removeOutputFramebuffer;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (struct CGImage { } *)newCGImageFromCurrentlyProcessedOutput:(struct __CFString { } *)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (BOOL)wantsMonochromeInput;
- (void)setupMimoMode:(BOOL)a0;
- (void)setupSecondaryOutputSize:(struct CGSize { double x0; double x1; })a0;
- (id)filterAtIndex:(unsigned long long)a0;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (unsigned long long)filterCount;
- (id)targets;
- (void)removeTarget:(id)a0;

@end
