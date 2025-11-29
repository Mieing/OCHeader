@interface VEVideoDecimator : NSObject

@property (nonatomic) double overShootModifier;
@property (nonatomic) unsigned long long dropCount;
@property (nonatomic) unsigned long long keepCount;
@property (nonatomic) double targetFrameRate;
@property (nonatomic) double incomingFrameRate;
@property (nonatomic) double maxFrameRate;
@property (nonatomic) BOOL enableTemporalDecimation;

- (void)enableTemporalDecimation:(BOOL)a0;
- (BOOL)dropFrame;
- (void)setInputFrameRate:(double)a0;
- (id)init;
- (void)reset;

@end
