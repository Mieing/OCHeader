@class FinderLiveGameTeamInfo_GameTeamUpInfoForAndience, NSString, FinderLiveGameTeamInfo_StartLiveGuide, FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo, FinderLiveGameTeamInfo_WeappJumpInfo, FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo, FinderLiveGameTeamInfo_FinderGameLiveAppInfo;

@interface MMFinderLiveGameTeamInfo : NSObject <NSCopying>

@property (nonatomic) BOOL disable;
@property (readonly, nonatomic) BOOL isWAGame;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *rankDesc;
@property (retain, nonatomic) NSString *teamupMemberDesc;
@property (retain, nonatomic) NSString *launchParam;
@property (nonatomic) unsigned int inTeamingUp;
@property (retain, nonatomic) NSString *bubbleInfo;
@property (nonatomic) unsigned int isTeamFull;
@property (retain, nonatomic) FinderLiveGameTeamInfo_GameLiveEnablePaymentPanelInfo *panelInfo;
@property (nonatomic) unsigned int teamupGiftStatus;
@property (retain, nonatomic) NSString *teamupGiftDesc;
@property (nonatomic) unsigned int teamupGiftReddot;
@property (retain, nonatomic) FinderLiveGameTeamInfo_WeappJumpInfo *teamupGiftJumpInfo;
@property (retain, nonatomic) NSString *reddotId;
@property (retain, nonatomic) NSString *teamupGiftIcon;
@property (retain, nonatomic) NSString *teamupGiftWordingColor;
@property (retain, nonatomic) NSString *teamupGiftBackgroundColor;
@property (retain, nonatomic) NSString *teamupMemberDescForAging;
@property (retain, nonatomic) FinderLiveGameTeamInfo_StartLiveGuide *startLiveGuide;
@property (retain, nonatomic) NSString *gameDesc;
@property (retain, nonatomic) FinderLiveGameTeamInfo_WeappJumpInfo *wxaJumpInfo;
@property (retain, nonatomic) NSString *joinGameButtonText;
@property (retain, nonatomic) FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo *wxaExtraJoinInfo;
@property (retain, nonatomic) FinderLiveGameTeamInfo_FinderGameLiveAppInfo *gameAppInfo;
@property (retain, nonatomic) FinderLiveGameTeamInfo_GameTeamUpInfoForAndience *gameTeamupInfoForAudience;
@property (readonly, nonatomic) NSString *channelExtraDataForWAGame;

- (id)initWithGameTeamInfo:(id)a0;
- (id)initWithAppMsgGameTeamInfo:(id)a0;
- (id)waGameJumpInfo;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyFromGameTeamInfo:(id)a0;
- (void)copyFromAppMsgGameTeamInfo:(id)a0;
- (void).cxx_destruct;

@end
