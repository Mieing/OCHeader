@class GPBStringInt64Dictionary, NSString, BattleConfigSetting;

@interface IESLiveMultiPKModeInfo : IESLivePBBaseMessage

@property (readonly, nonatomic) BattleConfigSetting *battleConfigModel;
@property (nonatomic) int modeTab;
@property (retain, nonatomic) GPBStringInt64Dictionary *userIdToTeamId;
@property (readonly, nonatomic) unsigned long long userIdToTeamId_Count;
@property (nonatomic) long long version;
@property (nonatomic) int switchSource;
@property (copy, nonatomic) NSString *versionStr;
@property (copy, nonatomic) NSString *battleConfigSetting;

+ (id)descriptor;

@end
