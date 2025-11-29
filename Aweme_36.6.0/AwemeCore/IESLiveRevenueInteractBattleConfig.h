@class NSString, NSNumber, BattleConfigSetting;

@interface IESLiveRevenueInteractBattleConfig : NSObject

@property (retain, nonatomic) BattleConfigSetting *battleConfigSetting;
@property (copy, nonatomic) NSString *battleConfigSettingStr;
@property (retain, nonatomic) NSNumber *duration;
@property (nonatomic) unsigned long long multiPKMode;
@property (nonatomic) int inviteType;
@property (copy, nonatomic) NSString *clientAttachedInfo;
@property (copy, nonatomic) NSString *switchSceneGameId;

- (id)logParams;
- (id)initWithBattleConfigSetting:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
