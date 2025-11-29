@class NSString, IESECURLModel, NSArray, IESECGoodsRecommendReasonModel, NSDictionary, IESECGoodsPrice, NSNumber, IESECGoodsMarketingFloorModel;

@interface IESECProductRecommendModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) IESECURLModel *coverImage;
@property (retain, nonatomic) IESECURLModel *recommendCover;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *sales;
@property (nonatomic) BOOL hasSecKill;
@property (retain, nonatomic) IESECGoodsMarketingFloorModel *platformTextActivity;
@property (copy, nonatomic) NSArray *coupons;
@property (retain, nonatomic) NSNumber *promotionSource;
@property (copy, nonatomic) NSString *KOLID;
@property (copy, nonatomic) NSString *secKOLID;
@property (copy, nonatomic) NSString *recommendInfo;
@property (retain, nonatomic) NSNumber *goodsSymbol;
@property (retain, nonatomic) IESECURLModel *productIcon;
@property (copy, nonatomic) NSString *productIconName;
@property (nonatomic) BOOL following;
@property (retain, nonatomic) IESECGoodsRecommendReasonModel *recommendReason;
@property (retain, nonatomic) IESECGoodsPrice *price;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)couponsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
