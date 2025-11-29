@class NSString;

@interface AWECampaignTaskInstanceRewardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long rewardType;
@property (nonatomic) long long rewardAmount;
@property (copy, nonatomic) NSString *rewardID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
