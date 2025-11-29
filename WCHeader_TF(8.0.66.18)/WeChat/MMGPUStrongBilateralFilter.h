@interface MMGPUStrongBilateralFilter : MMGPUOneTextureRender {
    double distanceNormalizationFactorUniform;
    double texelWidthOffsetUniform;
    double texelHeightOffsetUniform;
    int sbfControlUniform;
}

@property (nonatomic) double distanceNormalizationFactor;
@property (nonatomic) double texelSpacingMultiplier;

- (id)init;
- (void)setFactor:(double)a0 widthOffset:(float)a1 heightOffset:(float)a2;
- (void)setSBFControl:(int)a0;

@end
