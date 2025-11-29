@interface OMJColorAdjustmentDesc : NSObject

@property (nonatomic) float brightnessBias;
@property (nonatomic) float contrastBias;
@property (nonatomic) float saturationBias;
@property (nonatomic) float tintBias;
@property (nonatomic) float hueBias;
@property (nonatomic) float temperatureBias;
@property (nonatomic) float exposureBias;
@property (nonatomic) float vibranceBias;
@property (nonatomic) float sharpness;
@property (nonatomic) float vignette;

- (id)init;
- (id)initWithColorAdjustmentDesc:(id)a0;

@end
