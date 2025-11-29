@class NSString, NSMutableArray, FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo_GameLiveTeamUpPanelJump;

@interface FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *teamupInstructionUrl;
@property (retain, nonatomic) NSString *teamId;
@property (nonatomic) unsigned int paid;
@property (nonatomic) unsigned int audienceInGameTeam;
@property (nonatomic) unsigned int reservationsIsFull;
@property (nonatomic) unsigned int bookedOtherTeam;
@property (nonatomic) unsigned int prepaidAudiencesNums;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *rankAndScoreDesc;
@property (retain, nonatomic) NSMutableArray *otherDesc;
@property (retain, nonatomic) FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo_GameLiveTeamUpPanelJump *jumpInfo;
@property (nonatomic) unsigned int anchorSettedPayment;

+ (void)initialize;

@end
