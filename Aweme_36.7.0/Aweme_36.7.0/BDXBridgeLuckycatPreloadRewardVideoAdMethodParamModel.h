@class NSNumber, NSString;

@interface BDXBridgeLuckycatPreloadRewardVideoAdMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *ad_rit;
@property (copy, nonatomic) NSString *ad_alias_position;
@property (copy, nonatomic) NSString *task_key;
@property (retain, nonatomic) NSNumber *need_one_stage_amount;
@property (retain, nonatomic) NSNumber *enable_task_pick;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
