@interface IESLiveDanmakuSpeedConfiguration : NSObject

@property (nonatomic) double commonSpeed;
@property (nonatomic) double speedForFastest;
@property (nonatomic) double speedForFast;
@property (nonatomic) double speedForMedium;
@property (nonatomic) double speedForSlow;
@property (nonatomic) double speedForSlowest;

- (void)setupWithConfig:(id)a0;
- (id)initWithSettingConfig:(id)a0;

@end
