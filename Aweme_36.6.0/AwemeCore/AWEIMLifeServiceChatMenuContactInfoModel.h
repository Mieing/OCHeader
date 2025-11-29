@class NSString, AWEIMLifeServiceChatMenuContactCommonModel;

@interface AWEIMLifeServiceChatMenuContactInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMLifeServiceChatMenuContactCommonModel *awemeShop;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuContactCommonModel *shopVIP;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuContactCommonModel *shopInfo;
@property (retain, nonatomic) AWEIMLifeServiceChatMenuContactCommonModel *commodityRecommendInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)shopInfoJSONTransformer;
+ (id)awemeShopJSONTransformer;
+ (id)shopVIPJSONTransformer;
+ (id)commodityRecommendInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
