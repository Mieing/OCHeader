@class IESLiveChargeBannerRechargeInfo, NSDictionary, NSString;

@interface IESLiveChargeBannerDiamondExtraModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveChargeBannerRechargeInfo *bannerRechargeInfo;
@property (retain, nonatomic) NSDictionary *bizExtra;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bannerRechargeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;


@end
