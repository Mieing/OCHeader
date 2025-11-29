@class GameJoinTeamSetting_GameTeamUpSpecialGiftSetting, GameTeamUpPaymentSetting;

@interface GameJoinTeamSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int curJoinTeamMode;
@property (retain, nonatomic) GameTeamUpPaymentSetting *paymentSetting;
@property (retain, nonatomic) GameJoinTeamSetting_GameTeamUpSpecialGiftSetting *specialGiftSetting;

+ (void)initialize;

@end
