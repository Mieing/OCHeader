@class NSString;

@interface BattleCloudCollaborateConfig : IESLivePBBaseMessage

@property (nonatomic) int panelType;
@property (nonatomic) BOOL startLightningEffect;
@property (copy, nonatomic) NSString *targetValue;
@property (copy, nonatomic) NSString *expandTimePerRound;

+ (id)descriptor;

@end
