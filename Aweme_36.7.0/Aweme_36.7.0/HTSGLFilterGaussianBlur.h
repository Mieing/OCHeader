@interface HTSGLFilterGaussianBlur : HTSGLFilterTwoPassSamplingFilter {
    BOOL _shouldResizeBlurRadiusWithImageSize;
    float _verticalPassTexelWidthOffset;
    float _verticalPassTexelHeightOffset;
    float _horizontalPassTexelWidthOffset;
    float _horizontalPassTexelHeightOffset;
}

@property (nonatomic) double texelSpacingMultiplier;
@property (nonatomic) double blurRadiusInPixels;
@property (nonatomic) double blurRadiusAsFractionOfImageWidth;
@property (nonatomic) double blurRadiusAsFractionOfImageHeight;
@property (nonatomic) unsigned long long blurPasses;
@property (nonatomic) BOOL enableSubsampling;

+ (id)vertexShaderForOptimizedBlurOfRadius:(unsigned long long)a0 sigma:(double)a1;
+ (id)fragmentShaderForOptimizedBlurOfRadius:(unsigned long long)a0 sigma:(double)a1;
+ (id)vertexShaderForStandardBlurOfRadius:(unsigned long long)a0 sigma:(double)a1;
+ (id)fragmentShaderForStandardBlurOfRadius:(unsigned long long)a0 sigma:(double)a1;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)setupFilterForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeOfFBO;
- (void)switchToVertexShader:(id)a0 fragmentShader:(id)a1;
- (id)initWithContext:(id)a0;

@end
