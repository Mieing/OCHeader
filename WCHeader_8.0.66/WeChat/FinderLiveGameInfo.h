@class NSString, GameLiveJoinTeamSettingInfo;

@interface FinderLiveGameInfo : WXPBGeneratedMessage

@property (retain, nonatomic) GameLiveJoinTeamSettingInfo *joinTeamUpSettingInfo;
@property (nonatomic) unsigned int lastJoinTeamUpSetting;
@property (retain, nonatomic) NSString *gameAppid;
@property (retain, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSString *gameDownloadUrl;
@property (nonatomic) unsigned int showTeamupButton;
@property (retain, nonatomic) NSString *packageName;

+ (void)initialize;

@end
