@class NSArray, NSString, AWECodeGenEnPackagePriceInfoModel;

@interface AWECodeGenEnPurchasePackageInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSArray *skuIdsArray;
@property (copy, nonatomic) NSString *packageName;
@property (retain, nonatomic) AWECodeGenEnPackagePriceInfoModel *priceInfoModel;
@property (nonatomic) long long maxPurchaseQuantity;
@property (copy, nonatomic) NSString *packageDesc;
@property (copy, nonatomic) NSString *packageLabel;
@property (copy, nonatomic) NSString *packageTag;
@property (copy, nonatomic) NSArray *episodesArray;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *extraParams;
@property (copy, nonatomic) NSArray *defaultCouponListModelArray;
@property (copy, nonatomic) NSArray *strategyIdsArray;
@property (nonatomic) long long tabNumber;
@property (nonatomic) BOOL hasPaid;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) int packageType;
@property (nonatomic) BOOL isBuyRemainAllEpisodes;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
