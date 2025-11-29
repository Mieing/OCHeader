@class AWESearchEcommerceTextWithColor, NSString, NSArray, AWESearchEcommerceAnchorPricePrefix, AWESearchMerchandiseMainImageTag, AWEURLModel;

@interface AWESearchEcommerceAnchorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long price;
@property (retain, nonatomic) AWESearchEcommerceTextWithColor *textPrice;
@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *goodsSource;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSArray *coverURL;
@property (retain, nonatomic) NSArray *tagInfos;
@property (retain, nonatomic) AWEURLModel *statusIconURL;
@property (retain, nonatomic) AWESearchEcommerceAnchorPricePrefix *pricePrefix;
@property (copy, nonatomic) NSString *originPrice;
@property (nonatomic) long long priceStyle;
@property (retain, nonatomic) AWESearchMerchandiseMainImageTag *mainImageTag;
@property (nonatomic) BOOL enhancedDisplay;
@property (retain, nonatomic) NSString *sellOutTip;
@property (retain, nonatomic) NSArray *sellPoints;
@property (retain, nonatomic) AWESearchEcommerceTextWithColor *sales;

+ (id)coverURLJSONTransformer;
+ (id)tagInfosJSONTransformer;
+ (id)pricePrefixJSONTransformer;
+ (id)sellPointsJSONTransformer;
+ (id)statusIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
