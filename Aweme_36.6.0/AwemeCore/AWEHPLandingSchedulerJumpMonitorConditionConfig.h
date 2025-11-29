@interface AWEHPLandingSchedulerJumpMonitorConditionConfig : AWEBaseBizConfigModel

@property (nonatomic) long long monitorDuration;
@property (nonatomic) long long diffTabCount;
@property (nonatomic) long long diffJumpCount;

+ (id)JSONKeyPathsByPropertyKey;

@end
