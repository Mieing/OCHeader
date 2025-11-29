@class NSDictionary;

@interface BDXBridgeInspireSendRewardMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL send_reward;
@property (copy, nonatomic) NSDictionary *reward_extra;
@property (copy, nonatomic) NSDictionary *event_extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
