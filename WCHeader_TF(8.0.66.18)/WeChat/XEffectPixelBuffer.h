@interface XEffectPixelBuffer : NSObject

@property (copy, nonatomic) id /* block */ cleanup;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pixelBufferSize;

+ (id)bufferWithPixel:(struct __CVBuffer { } *)a0 snapshotRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cleanup:(id /* block */)a2;

- (id)clone;
- (void)dealloc;
- (void).cxx_destruct;

@end
