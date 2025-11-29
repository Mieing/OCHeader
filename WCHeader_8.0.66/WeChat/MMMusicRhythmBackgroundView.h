@interface MMMusicRhythmBackgroundView : MMWebImageView

@property (nonatomic) BOOL motioning;
@property (nonatomic) double motionDuration;

- (void)startMotion;
- (void)startMotionExperiment;
- (void)stopMotion;

@end
