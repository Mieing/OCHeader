@class NSString, AWEPOIVirgoUnitModel, AWEPOIVirgoTimingRuleModel;

@interface AWEPOIVirgoRuleTask : NSObject

@property (copy, nonatomic) NSString *factorKey;
@property (copy, nonatomic) NSString *taskKey;
@property (retain, nonatomic) AWEPOIVirgoTimingRuleModel *timingRule;
@property (retain, nonatomic) AWEPOIVirgoUnitModel *unitModel;

+ (id)modelWithData:(id)a0;

- (void).cxx_destruct;

@end
