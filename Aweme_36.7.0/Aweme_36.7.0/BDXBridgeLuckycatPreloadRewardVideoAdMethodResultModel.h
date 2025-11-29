@class NSString, BDXBridgeLuckycatPreloadRewardVideoAdPickedTaskInfo;

@interface BDXBridgeLuckycatPreloadRewardVideoAdMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *one_stage_amount;
@property (copy, nonatomic) NSString *post_done_extra;
@property (retain, nonatomic) BDXBridgeLuckycatPreloadRewardVideoAdPickedTaskInfo *picked_task_info;
@property (nonatomic) long long status;

+ (id)picked_task_infoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
