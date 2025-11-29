@class BizAcctActivityParticipation_ParticipateInfo;

@interface BizAcctActivityParticipation : WXPBGeneratedMessage

@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned long long useruin;
@property (retain, nonatomic) BizAcctActivityParticipation_ParticipateInfo *info;

+ (void)initialize;

@end
