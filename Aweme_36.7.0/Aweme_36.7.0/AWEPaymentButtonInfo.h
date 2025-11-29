@class NSString;

@interface AWEPaymentButtonInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *textWithPrice;
@property (copy, nonatomic) NSString *textWithOutPrice;
@property (copy, nonatomic) NSString *textForAdCharge;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
