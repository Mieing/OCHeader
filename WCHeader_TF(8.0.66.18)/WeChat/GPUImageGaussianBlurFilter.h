@interface GPUImageGaussianBlurFilter : GPUImageTwoPassTextureSamplingFilter {
    BOOL shouldResizeBlurRadiusWithImageSize;
}

@property (nonatomic) double texelSpacingMultiplier;
@property (nonatomic) double blurRadiusInPixels;
@property (nonatomic) double blurRadiusAsFractionOfImageWidth;
@property (nonatomic) double blurRadiusAsFractionOfImageHeight;
@property (nonatomic) unsigned long long blurPasses;

+ (id)vertexShaderForStandardBlurOfRadius:(unsigned long long)a0 sigma:(double)a1;
+ (id)fragmentShaderForStandardBlurOfRadius:(unsigned long long)a0 sigma:(double)a1;
+ (id)vertexShaderForOptimizedBlurOfRadius:(unsigned long long)a0 sigma:(double)a1;
+ (id)fragmentShaderForOptimizedBlurOfRadius:(unsigned long long)a0 sigma:(double)a1;

- (id)initWithFirstStageVertexShaderFromString:(id)a0 firstStageFragmentShaderFromString:(id)a1 secondStageVertexShaderFromString:(id)a2 secondStageFragmentShaderFromString:(id)a3;
- (id)init;
- (void)setupFilterForSize:(struct CGSize { double x0; double x1; })a0;
- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)switchToVertexShader:(id)a0 fragmentShader:(id)a1;

@end
