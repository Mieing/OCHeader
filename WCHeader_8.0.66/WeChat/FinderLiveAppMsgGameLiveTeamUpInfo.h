@class NSString, FinderLiveAppMsgGameLiveTeamUpInfo_GameLiveEnablePaymentPanelMsgInfo;

@interface FinderLiveAppMsgGameLiveTeamUpInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *curTeamMemberTips;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *rankDesc;
@property (nonatomic) unsigned int inTeamingUp;
@property (nonatomic) unsigned int isTeamFull;
@property (retain, nonatomic) FinderLiveAppMsgGameLiveTeamUpInfo_GameLiveEnablePaymentPanelMsgInfo *paymentPanelInfo;
@property (nonatomic) unsigned int teamupGiftStatus;
@property (retain, nonatomic) NSString *teamupGiftDesc;
@property (retain, nonatomic) NSString *teamupGiftIcon;
@property (retain, nonatomic) NSString *teamupGiftWordingColor;
@property (retain, nonatomic) NSString *teamupGiftBackgroundColor;
@property (retain, nonatomic) NSString *curTeamMemberTipsForAging;

+ (void)initialize;

@end
