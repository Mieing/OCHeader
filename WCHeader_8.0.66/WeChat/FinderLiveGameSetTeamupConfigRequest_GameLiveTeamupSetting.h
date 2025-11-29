@class FinderLiveGameSetTeamupConfigRequest_GameLiveTeamupSetting_WxaGameTeamupInfo;

@interface FinderLiveGameSetTeamupConfigRequest_GameLiveTeamupSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int reqType;
@property (nonatomic) unsigned int joinTeamMode;
@property (retain, nonatomic) FinderLiveGameSetTeamupConfigRequest_GameLiveTeamupSetting_WxaGameTeamupInfo *wxaTeamupInfo;

+ (void)initialize;

@end
