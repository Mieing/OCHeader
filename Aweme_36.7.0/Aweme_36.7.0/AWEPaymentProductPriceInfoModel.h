@class NSString;

@interface AWEPaymentProductPriceInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *currencyType;
@property (copy, nonatomic) NSString *currentPrice;
@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *priceUnit;
@property (copy, nonatomic) NSString *startHint;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
