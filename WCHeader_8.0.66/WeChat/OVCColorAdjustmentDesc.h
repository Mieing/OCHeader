@interface OVCColorAdjustmentDesc : NSObject

@property (nonatomic) double brightnessBias;
@property (nonatomic) double contrastBias;
@property (nonatomic) double saturationBias;
@property (nonatomic) double tintBias;
@property (nonatomic) double hueBias;
@property (nonatomic) double temperatureBias;
@property (nonatomic) double exposureBias;
@property (nonatomic) double vibranceBias;
@property (nonatomic) double sharpness;
@property (nonatomic) double vignette;

- (id)init;

@end
