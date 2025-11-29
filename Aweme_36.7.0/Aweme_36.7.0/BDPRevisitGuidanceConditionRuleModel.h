@class NSString, BDPRevisitConditionTriggerDataV2, NSArray;

@interface BDPRevisitGuidanceConditionRuleModel : BDPBasePluginModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long status;
@property (nonatomic) long long priority;
@property (nonatomic) long long data;
@property (retain, nonatomic) BDPRevisitConditionTriggerDataV2 *triggerPath;
@property (copy, nonatomic) NSArray *triggerFor;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
