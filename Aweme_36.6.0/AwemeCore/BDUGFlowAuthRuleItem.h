@class NSString, NSArray, BDUGFlowAuthRuleDialogStyle;

@interface BDUGFlowAuthRuleItem : NSObject

@property (copy, nonatomic) NSString *ruleID;
@property (nonatomic) long long action;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL dynamicStrategy;
@property (copy, nonatomic) NSArray *validConditions;
@property (retain, nonatomic) BDUGFlowAuthRuleDialogStyle *dialogStyle;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSArray *errorConfigs;

+ (id)modelPropertyBlacklist;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (id)convertClassForValidConditionKey;
- (void).cxx_destruct;

@end
