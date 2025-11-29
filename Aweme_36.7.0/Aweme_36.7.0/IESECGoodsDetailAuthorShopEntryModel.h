@class IESECGoodsCertificationModel, NSString, IESECURLModel, NSArray, IESECGoodsDetailSellRatingInfoModel, NSNumber, IESECGoodsDetailBrandInfoModel;

@interface IESECGoodsDetailAuthorShopEntryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long toutiaoGoodsCount;
@property (retain, nonatomic) NSNumber *authorID;
@property (nonatomic) long long recommendGoodsCount;
@property (copy, nonatomic) NSString *shopName;
@property (retain, nonatomic) IESECGoodsDetailSellRatingInfoModel *sellRatingInfo;
@property (retain, nonatomic) IESECURLModel *shopLogo;
@property (copy, nonatomic) NSArray *shopHeaderIconList;
@property (copy, nonatomic) NSArray *promotionInfos;
@property (retain, nonatomic) IESECGoodsCertificationModel *shopBanner;
@property (copy, nonatomic) NSString *URL;
@property (nonatomic) BOOL followStatus;
@property (retain, nonatomic) IESECGoodsDetailBrandInfoModel *brandInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shopHeaderIconListJSONTransformer;
+ (id)promotionInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
