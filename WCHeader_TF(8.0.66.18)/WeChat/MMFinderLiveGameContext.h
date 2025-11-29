@class GameLiveJumpInfo, NSString, FinderLiveGameData, MMFinderLiveGameUserInfo, OrderedDictionary, MMFinderLiveGameTeamInfo, GeneralGameLiveInfo, MMFinderLiveGameTeamWAGameJumpInfo, FinderLiveGameInfo, GameTeamUpPaymentSetting;

@interface MMFinderLiveGameContext : NSObject

@property (retain, nonatomic) MMFinderLiveGameTeamInfo *gameTeamInfo;
@property (retain, nonatomic) FinderLiveGameInfo *gameInfo;
@property (nonatomic) unsigned int lastJoinGameMode;
@property (retain, nonatomic) NSString *lastJoinGameLaunchParam;
@property (retain, nonatomic) MMFinderLiveGameTeamWAGameJumpInfo *lastJoinGameWaGameJumpInfo;
@property (retain, nonatomic) OrderedDictionary *joinTeamQualifications;
@property (retain, nonatomic) GameTeamUpPaymentSetting *joinTeamPaymentSetting;
@property (retain, nonatomic) GameLiveJumpInfo *gameLiveJumpInfo;
@property (retain, nonatomic) GeneralGameLiveInfo *generalGameLiveInfo;
@property (nonatomic) BOOL hasClickJoinTeamButton;
@property (retain, nonatomic) FinderLiveGameData *liveGameData;
@property (nonatomic) unsigned int platformId;
@property (nonatomic) BOOL notPassOpenIdOnLaunchGame;
@property (retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo;

- (id)init;
- (void)copyJoinTeamQualificationsFromPB:(id)a0;
- (BOOL)isSupportGameDynamicCard;
- (id)description;
- (BOOL)isLiveFromQQ;
- (BOOL)isLiveFromWechat;
- (void).cxx_destruct;

@end
