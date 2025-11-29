@class NSString;

@interface AWELongVideoFeedPaymentInfoBody : AWEBaseApiModel

@property (copy, nonatomic) NSString *originPrice;
@property (copy, nonatomic) NSString *realPrice;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) long long payType;

+ (id)JSONKeyPathsByPropertyKey;

- (float)priceForMetric;
- (id)payIntroType;
- (void).cxx_destruct;

@end
