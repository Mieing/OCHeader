@interface FinderClientBrightness : WXPBGeneratedMessage

@property (nonatomic) float currentBrightness;
@property (nonatomic) float currentBrightnessPercent;
@property (nonatomic) float maxBrightness;
@property (nonatomic) float minBrightness;

+ (void)initialize;

- (void)setMinBrightness:(float)a0;
- (float)minBrightness;
- (void)setMaxBrightness:(float)a0;
- (float)maxBrightness;
- (void)setCurrentBrightnessPercent:(float)a0;
- (float)currentBrightnessPercent;
- (void)setCurrentBrightness:(float)a0;
- (float)currentBrightness;

@end
