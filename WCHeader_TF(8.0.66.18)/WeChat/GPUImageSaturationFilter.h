@interface GPUImageSaturationFilter : GPUImageFilter {
    int saturationUniform;
}

@property (nonatomic) double saturation;

- (id)init;

@end
