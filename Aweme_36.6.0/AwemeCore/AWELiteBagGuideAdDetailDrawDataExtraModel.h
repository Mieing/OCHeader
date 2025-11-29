@class NSString;

@interface AWELiteBagGuideAdDetailDrawDataExtraModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long expect_reward_time;
@property (nonatomic) unsigned long long next_round_second;
@property (nonatomic) unsigned long long max_reward_limit;
@property (nonatomic) unsigned long long wallet_amount;
@property (nonatomic) unsigned long long toast_max_reward_tip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
