@class IESECMallDeepFeedProductBaseInfoModel, IESECMallDeepFeedProductPriceModel, IESECMallDeepFeedProductShopInfoModel, IESECMallDeepFeedProductSalesInfoModel, IESECMallDeepFeedProductBuyButtonInfoModel, IESECMallDeepFeedProductCollectInfoModel, NSDictionary, IESECMallDeepFeedProductLinkInfoModel, NSString, IESECMallDeepFeedProductCommentInfoModel, IESECMallDeepFeedProductCartInfoModel, IESECMallDeepFeedTrackInfoModel, IESECMallDeepFeedProductCoverInfoModel, NSArray, IESECMallDeepFeedProductSKUInfoModel;

@interface IESECMallDeepFeedProductModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL placeHolderData;
@property (nonatomic) BOOL needResetImageView;
@property (retain, nonatomic) IESECMallDeepFeedProductBaseInfoModel *baseInfo;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESECMallDeepFeedProductCoverInfoModel *coverInfo;
@property (copy, nonatomic) NSArray *titleTagsInfo;
@property (retain, nonatomic) IESECMallDeepFeedProductPriceModel *priceInfo;
@property (retain, nonatomic) IESECMallDeepFeedProductSalesInfoModel *salesInfo;
@property (copy, nonatomic) NSArray *recReasonsInfo;
@property (retain, nonatomic) IESECMallDeepFeedProductShopInfoModel *shopInfo;
@property (retain, nonatomic) IESECMallDeepFeedProductCommentInfoModel *commentInfo;
@property (retain, nonatomic) IESECMallDeepFeedProductCartInfoModel *cartInfo;
@property (retain, nonatomic) IESECMallDeepFeedProductCollectInfoModel *collectInfo;
@property (retain, nonatomic) IESECMallDeepFeedTrackInfoModel *trackInfo;
@property (retain, nonatomic) IESECMallDeepFeedProductBuyButtonInfoModel *buyButtonInfo;
@property (retain, nonatomic) IESECMallDeepFeedProductLinkInfoModel *linkInfo;
@property (copy, nonatomic) NSArray *searchBoxInfo;
@property (retain, nonatomic) IESECMallDeepFeedProductSKUInfoModel *skuInfo;
@property (retain, nonatomic) NSDictionary *custom;
@property (retain, nonatomic) NSDictionary *lastSelectSKUDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleTagsInfoJSONTransformer;
+ (id)recReasonsInfoJSONTransformer;
+ (id)searchBoxInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
