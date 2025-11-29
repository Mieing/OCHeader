@class LiveReplaySetting, GameJoinTeamSetting, MicSetting, LiveLotterySetting;

@interface LiveAnchorStatus : WXPBGeneratedMessage

@property (nonatomic) unsigned long long timeMs;
@property (nonatomic) unsigned long long statusFlag;
@property (retain, nonatomic) GameJoinTeamSetting *gameJoinTeamSetting;
@property (retain, nonatomic) MicSetting *micSetting;
@property (retain, nonatomic) LiveLotterySetting *lotterySetting;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) LiveReplaySetting *liveReplaySetting;

+ (void)initialize;

@end
