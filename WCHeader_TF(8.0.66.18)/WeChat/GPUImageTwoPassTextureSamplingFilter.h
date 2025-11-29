@interface GPUImageTwoPassTextureSamplingFilter : GPUImageTwoPassFilter {
    int verticalPassTexelWidthOffsetUniform;
    int verticalPassTexelHeightOffsetUniform;
    int horizontalPassTexelWidthOffsetUniform;
    int horizontalPassTexelHeightOffsetUniform;
    float verticalPassTexelWidthOffset;
    float verticalPassTexelHeightOffset;
    float horizontalPassTexelWidthOffset;
    float horizontalPassTexelHeightOffset;
}

@property (nonatomic) double verticalTexelSpacing;
@property (nonatomic) double horizontalTexelSpacing;

- (id)initWithFirstStageVertexShaderFromString:(id)a0 firstStageFragmentShaderFromString:(id)a1 secondStageVertexShaderFromString:(id)a2 secondStageFragmentShaderFromString:(id)a3;
- (void)setUniformsForProgramAtIndex:(unsigned long long)a0;
- (void)setupFilterForSize:(struct CGSize { double x0; double x1; })a0;

@end
