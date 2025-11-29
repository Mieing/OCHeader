@class NSString;

@interface IESECShopGoodsMarketingData : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *returnReward;
@property (copy, nonatomic) NSString *returnRewardPrefix;
@property (copy, nonatomic) NSString *returnRewardUnit;
@property (copy, nonatomic) NSString *transMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
