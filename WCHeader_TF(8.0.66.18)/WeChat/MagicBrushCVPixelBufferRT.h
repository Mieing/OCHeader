@protocol MagicBrushCVPixelBufferRTDelegate;

@interface MagicBrushCVPixelBufferRT : MagicBrushRenderTarget

@property (weak, nonatomic) id<MagicBrushCVPixelBufferRTDelegate> delegate;

- (id)initForCanvas:(int)a0 delegate:(id)a1 inRuntime:(void *)a2;
- (void).cxx_destruct;

@end
