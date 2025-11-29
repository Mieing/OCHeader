@class TeamTask_Config, NSMutableDictionary, NSString;

@interface TeamTask : IESLivePBBaseMessage

@property (retain, nonatomic) TeamTask_Config *config;
@property (nonatomic) BOOL hasConfig;
@property (retain, nonatomic) NSMutableDictionary *info;
@property (readonly, nonatomic) unsigned long long info_Count;
@property (copy, nonatomic) NSString *battleId;
@property (copy, nonatomic) NSString *triggerUserId;
@property (nonatomic) int battleType;
@property (copy, nonatomic) NSString *webcastTriggerUid;
@property (copy, nonatomic) NSString *triggerOpenId;

+ (id)descriptor;

@end
