@class IESECGoodsSpecInfo, IESECBGImageActivityModel, NSString, NSArray, IESECURLModel, IESECGoodsSalesInfo, IESECGoodsPrice, NSNumber, IESECGoodsTaxInfiModel;

@interface IESECGoodsBaseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long promotionSource;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESECGoodsPrice *price;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSNumber *sales;
@property (nonatomic) BOOL hideSales;
@property (nonatomic) long long soldStatus;
@property (copy, nonatomic) NSString *promotionSourceText;
@property (retain, nonatomic) IESECURLModel *promotionSourceIcon;
@property (nonatomic) long long deliveryType;
@property (nonatomic) long long promotionSymbol;
@property (retain, nonatomic) IESECURLModel *promotionTagIcon;
@property (copy, nonatomic) NSString *sellerType;
@property (copy, nonatomic) NSString *verticalMarket;
@property (retain, nonatomic) IESECGoodsTaxInfiModel *taxInfo;
@property (retain, nonatomic) IESECURLModel *productIcon;
@property (copy, nonatomic) NSString *productIconLink;
@property (copy, nonatomic) NSString *skuId;
@property (copy, nonatomic) NSString *shopId;
@property (retain, nonatomic) IESECBGImageActivityModel *bgImageURL;
@property (nonatomic) long long saleType;
@property (retain, nonatomic) IESECGoodsSpecInfo *specInfo;
@property (retain, nonatomic) IESECGoodsSalesInfo *salesInfo;
@property (copy, nonatomic) NSArray *salePointList;
@property (nonatomic) BOOL shouldFoldGoodsDetail;
@property (nonatomic) BOOL soldOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)salePointListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
