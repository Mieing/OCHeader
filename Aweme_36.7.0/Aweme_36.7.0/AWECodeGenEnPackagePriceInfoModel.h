@class NSString;

@interface AWECodeGenEnPackagePriceInfoModel : AWEBaseDataModel

@property (nonatomic) long long currencyType;
@property (nonatomic) long long originPrice;
@property (nonatomic) long long currentPrice;
@property (nonatomic) double discount;
@property (nonatomic) long long singlePrice;
@property (copy, nonatomic) NSString *unitPriceStr;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
