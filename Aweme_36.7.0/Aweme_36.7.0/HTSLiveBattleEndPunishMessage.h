@class HTSLiveCommon, HTSLiveBattleSettings;

@interface HTSLiveBattleEndPunishMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveBattleSettings *battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (nonatomic) int endBattlePunishReason;

+ (id)descriptor;

@end
