@class NSString, TSPKSceneRuleModel;

@interface TSPKDetectPlanModel : NSObject

@property (copy, nonatomic) NSString *interestMethodType;
@property (copy, nonatomic) NSString *dataType;
@property (nonatomic) unsigned long long taskType;
@property (retain, nonatomic) TSPKSceneRuleModel *ruleModel;

- (id)planUid;
- (void).cxx_destruct;
- (unsigned long long)triggerType;

@end
