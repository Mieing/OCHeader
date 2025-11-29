@class NSString, IESLLVIRTimingRuleModel, IESLLVIRUnitModel;

@interface IESLLVIRRuleTask : NSObject

@property (copy, nonatomic) NSString *factorKey;
@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) IESLLVIRTimingRuleModel *timingRule;
@property (retain, nonatomic) IESLLVIRUnitModel *unitModel;

+ (id)modelWithData:(id)a0;

- (void).cxx_destruct;

@end
