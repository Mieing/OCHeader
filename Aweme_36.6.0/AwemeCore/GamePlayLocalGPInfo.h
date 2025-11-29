@class NSString, GamePlayVESpeedConfig;

@interface GamePlayLocalGPInfo : NSObject

@property (nonatomic) unsigned long long gameplayType;
@property (copy, nonatomic) NSString *materialPath;
@property (copy, nonatomic) NSString *outputPath;
@property (copy, nonatomic) NSString *resourcePath;
@property (copy, nonatomic) NSString *intermediatePath;
@property (nonatomic) long long abilityFlag;
@property (nonatomic) double stopmotionFirstRenderTime;
@property (nonatomic) double stopmotionGapDuration;
@property (retain, nonatomic) GamePlayVESpeedConfig *speedConfig;

- (void).cxx_destruct;

@end
