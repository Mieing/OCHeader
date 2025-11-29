@class NSMutableArray;

@interface IESImageListFilter : HTSGLFilter

@property (readonly, nonatomic) NSMutableArray *filters;

- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
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
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (BOOL)wantsMonochromeInput;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)removeFilter:(id)a0;
- (void)removeTarget:(id)a0;

@end
