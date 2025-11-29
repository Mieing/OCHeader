@class FinderLiveGameTeamInfo_FinderGameLiveAppInfo, NSString, FinderLiveGameTeamInfo_GameTeamUpInfoForAndience, FinderLiveGameTeamInfo_WeappJumpInfo, FinderLiveGameTeamInfo_StartLiveGuide, FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo, FinderLiveGameTeamInfo_GameTeamUpInfoForAnchor, FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo;

@interface FinderLiveGameTeamInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *rankDesc;
@property (retain, nonatomic) NSString *teamupMemberDesc;
@property (retain, nonatomic) NSString *launchParam;
@property (nonatomic) unsigned int inTeamingUp;
@property (retain, nonatomic) NSString *bubbleInfo;
@property (retain, nonatomic) FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo *panelInfo;
@property (nonatomic) unsigned int teamupGiftStatus;
@property (retain, nonatomic) NSString *teamupGiftDesc;
@property (nonatomic) unsigned int teamupGiftReddot;
@property (retain, nonatomic) FinderLiveGameTeamInfo_WeappJumpInfo *teamupGiftJumpInfo;
@property (retain, nonatomic) NSString *reddotId;
@property (retain, nonatomic) NSString *teamupGiftIcon;
@property (retain, nonatomic) NSString *teamupGiftWordingColor;
@property (retain, nonatomic) NSString *teamupGiftBackgroundColor;
@property (retain, nonatomic) FinderLiveGameTeamInfo_StartLiveGuide *startLiveGuide;
@property (retain, nonatomic) NSString *gameDesc;
@property (retain, nonatomic) FinderLiveGameTeamInfo_WeappJumpInfo *wxaJumpInfo;
@property (retain, nonatomic) NSString *teamupMemberDescForAging;
@property (retain, nonatomic) NSString *joinGameButtonText;
@property (retain, nonatomic) FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo *wxaExtraJoinInfo;
@property (retain, nonatomic) FinderLiveGameTeamInfo_FinderGameLiveAppInfo *gameAppInfo;
@property (retain, nonatomic) FinderLiveGameTeamInfo_GameTeamUpInfoForAnchor *gameTeamupInfoForAnchor;
@property (nonatomic) BOOL audienceIsFanClubMember;
@property (retain, nonatomic) FinderLiveGameTeamInfo_GameTeamUpInfoForAndience *gameTeamupInfoForAudience;

+ (void)initialize;

@end
