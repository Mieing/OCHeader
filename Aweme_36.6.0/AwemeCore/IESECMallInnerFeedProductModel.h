@class IESECMallInnerFeedProductSKUInfoModel, IESECMallInnerFeedProductShopInfoModel, IESECMallInnerFeedProductLogisticsInfoModel, IESECMallInnerFeedProductCartInfoModel, NSDictionary, IESECMallInnerFeedProductCoverInfoModel, IESECMallInnerFeedProductCommentInfoModel, IESECMallInnerFeedProductTitleInfoModel, IESECMallInnerFeedProductPriceModel, NSString, IESECMallInnerFeedProductCollectInfoModel, IESECMallInnerFeedProductLinkInfoModel, IESECMallInnerFeedProductShareInfoModel, IESECMallInnerFeedProductBuyButtonInfoModel, NSArray, IESECMallInnerFeedProductBaseInfoModel, IESECMallInnerFeedProductSalesInfoModel;

@interface IESECMallInnerFeedProductModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL plachHolderData;
@property (retain, nonatomic) IESECMallInnerFeedProductBaseInfoModel *baseInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductTitleInfoModel *titleInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductCoverInfoModel *coverInfo;
@property (copy, nonatomic) NSArray *titleTagsInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductPriceModel *priceInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductSalesInfoModel *salesInfo;
@property (copy, nonatomic) NSArray *marketingTagsInfo;
@property (copy, nonatomic) NSArray *privilegeTagsInfo;
@property (copy, nonatomic) NSArray *recReasonsInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductShopInfoModel *shopInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductLogisticsInfoModel *logisiticsInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductCommentInfoModel *commentInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductCartInfoModel *cartInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductCollectInfoModel *collectInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductBuyButtonInfoModel *buyButtonInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductLinkInfoModel *linkInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductSKUInfoModel *skuInfo;
@property (retain, nonatomic) IESECMallInnerFeedProductShareInfoModel *shareInfo;
@property (retain, nonatomic) NSDictionary *custom;
@property (retain, nonatomic) NSDictionary *lastSelectSKUDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleTagsInfoJSONTransformer;
+ (id)recReasonsInfoJSONTransformer;
+ (id)marketingTagsInfoJSONTransformer;
+ (id)privilegeTagsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
