@class NSString;

@interface AWELiteBagGuideRewardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rewardAmount;
@property (copy, nonatomic) NSString *rewardUnit;
@property (copy, nonatomic) NSString *rewardIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
