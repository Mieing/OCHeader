@class GameTeamUpSpecialGiftSettingDetail, NSString, FinderJumpInfo, MMFinderLiveTask;

@interface WCFinderLiveGameTeamModel : NSObject

@property (retain, nonatomic) FinderJumpInfo *playTogetherIconJumpInfo;
@property (retain, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (nonatomic) int scene;
@property (nonatomic) int role;
@property (retain, nonatomic) NSString *gameAppId;
@property (retain, nonatomic) NSString *entraAntiInfo;
@property (retain, nonatomic) NSString *gameUserId;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) long long gamePlatformId;
@property (retain, nonatomic) NSString *nickname;
@property (nonatomic) unsigned int joinTeamMode;
@property (retain, nonatomic) GameTeamUpSpecialGiftSettingDetail *specialGiftSetting;
@property (retain, nonatomic) NSString *dataFromGame;
@property (retain, nonatomic) NSString *gameClientParams;
@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) NSString *commentScene;
@property (retain, nonatomic) NSString *enterImmerseType;

- (void).cxx_destruct;

@end
