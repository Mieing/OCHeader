@class NSString, NSNumber;

@interface BDXBridgeLuckycatPreloadRewardVideoAdPickedTaskInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *task_type;
@property (retain, nonatomic) NSNumber *task_amount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
