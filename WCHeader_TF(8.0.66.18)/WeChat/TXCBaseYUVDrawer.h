@interface TXCBaseYUVDrawer : TXCGLDrawer {
    const float *_colorConversionMartixPtr;
    const float *_colorConversionOffsetPtr;
}

@property (nonatomic) unsigned int colorConversionOffsetUniform;
@property (nonatomic) unsigned int colorConversionMatrixUniform;

- (void)getColorConversionMatrix:(const float **)a0 andColorConversionOffset:(const float **)a1 fromPixelBuffer:(struct __CVBuffer { } *)a2;
- (void)setupColorConversionWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)uploadColorConversionToGPU;

@end
