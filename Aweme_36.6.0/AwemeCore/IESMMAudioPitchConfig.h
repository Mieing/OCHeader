@interface IESMMAudioPitchConfig : IESMMAudioEffectConfig

@property (nonatomic) BOOL formatShiftOn;
@property (nonatomic) BOOL smoothOn;
@property (nonatomic) int processChMode;
@property (nonatomic) int transientDetectMode;
@property (nonatomic) int phaseResetMode;
@property (nonatomic) int phaseAdjustMethod;
@property (nonatomic) int windowMode;
@property (nonatomic) int pitchTunerMode;
@property (nonatomic) int blockSize;
@property (nonatomic) float centtone;
@property (nonatomic) float semiton;
@property (nonatomic) float octative;
@property (nonatomic) float speedRatio;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channels;
@property (nonatomic) int strEffectId;

- (id)toDicInfo;
- (void)setupDefaultValues;

@end
