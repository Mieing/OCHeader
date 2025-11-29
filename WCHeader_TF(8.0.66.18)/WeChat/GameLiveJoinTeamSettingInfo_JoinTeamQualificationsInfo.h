@class NSString, GameTeamUpSpecialGiftSettingDetail, GameTeamUpPaymentSetting;

@interface GameLiveJoinTeamSettingInfo_JoinTeamQualificationsInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tips;
@property (nonatomic) unsigned int value;
@property (retain, nonatomic) GameTeamUpPaymentSetting *paymentSetting;
@property (retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *specialGiftSetting;

+ (void)initialize;

@end
