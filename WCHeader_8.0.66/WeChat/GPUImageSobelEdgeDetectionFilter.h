@interface GPUImageSobelEdgeDetectionFilter : GPUImageTwoPassFilter {
    int texelWidthUniform;
    int texelHeightUniform;
    int edgeStrengthUniform;
    BOOL hasOverriddenImageSizeFactor;
}

@property (nonatomic) double texelWidth;
@property (nonatomic) double texelHeight;
@property (nonatomic) double edgeStrength;

- (id)init;
- (id)initWithFragmentShaderFromString:(id)a0;
- (void)setupFilterForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setUniformsForProgramAtIndex:(unsigned long long)a0;
- (BOOL)wantsMonochromeInput;
- (BOOL)providesMonochromeOutput;

@end
