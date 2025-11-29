@interface GPUImageCropFilter : GPUImageFilter {
    float cropTextureCoordinates[8];
    struct CGSize { double width; double height; } originallySuppliedInputSize;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRegion;
@property (nonatomic) struct CGSize { double width; double height; } outFrameSize;

- (id)initWithCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)calculateCropTextureCoordinates;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1;
- (void)setInputRotation:(unsigned long long)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeOfFBO;
- (struct CGSize { double x0; double x1; })outputFrameSize;

@end
