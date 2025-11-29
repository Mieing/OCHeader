@class NSString, VIRUnitModel, VIRTimingRuleModel;

@interface VIRRuleTask : NSObject

@property (copy, nonatomic) NSString *factorKey;
@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) VIRTimingRuleModel *timingRule;
@property (retain, nonatomic) VIRUnitModel *unitModel;

+ (id)modelWithData:(id)a0;

- (void).cxx_destruct;

@end
