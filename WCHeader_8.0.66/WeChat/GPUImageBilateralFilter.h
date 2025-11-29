@interface GPUImageBilateralFilter : GPUImageGaussianBlurFilter {
    double firstDistanceNormalizationFactorUniform;
    double secondDistanceNormalizationFactorUniform;
}

@property (nonatomic) double distanceNormalizationFactor;

- (id)init;

@end
