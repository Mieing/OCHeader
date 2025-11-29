@interface GPUImageWhiteBalanceFilter : GPUImageFilter {
    int temperatureUniform;
    int tintUniform;
}

@property (nonatomic) double temperature;
@property (nonatomic) double tint;

- (id)init;

@end
