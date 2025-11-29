@class GPUImageOutput, NSArray, GPUImageFramebuffer, NSString, NSMutableArray;
@protocol GPUImageInput;

@interface GPUImageFilterGroup : GPUImageOutput <GPUImageInput> {
    NSMutableArray *filters;
    BOOL isEndProcessing;
}

@property (retain, nonatomic) GPUImageOutput<GPUImageInput> *terminalFilter;
@property (retain, nonatomic) NSArray *initialFilters;
@property (retain, nonatomic) GPUImageOutput<GPUImageInput> *inputFilterToIgnoreForUpdates;
@property (retain, nonatomic) GPUImageFramebuffer *inputFrameBuffer;
@property (nonatomic) struct CGSize { double width; double height; } inputSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addFilter:(id)a0;
- (id)filterAtIndex:(unsigned long long)a0;
- (unsigned long long)filterCount;
- (void)useNextFrameForImageCapture;
- (struct CGImage { } *)newCGImageFromCurrentlyProcessedOutput;
- (void)setTargetToIgnoreForUpdates:(id)a0;
- (void)addTarget:(id)a0 atTextureLocation:(long long)a1;
- (void)removeTarget:(id)a0;
- (void)removeAllTargets;
- (id)targets;
- (void)setRGB2YUV420Process:(BOOL)a0;
- (void)setFrameProcessingCompletionBlock:(id /* block */)a0;
- (id /* block */)frameProcessingCompletionBlock;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (long long)nextAvailableTextureIndex;
- (void)setInputTexture:(unsigned int)a0 inputSize:(struct CGSize { double x0; double x1; })a1;
- (void)setInput:(id)a0 inputSize:(struct CGSize { double x0; double x1; })a1;
- (int)generateFrameBuffer:(BOOL)a0 newSize:(struct CGSize { double x0; double x1; })a1;
- (void)destroyFrameBuffer;
- (unsigned int)processing;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (void)forceProcessingAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)forceProcessingAtSizeRespectingAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (void)endProcessing;
- (BOOL)wantsMonochromeInput;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)a0;
- (void).cxx_destruct;

@end
