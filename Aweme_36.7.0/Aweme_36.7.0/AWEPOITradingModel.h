@class NSString;

@interface AWEPOITradingModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *typeText;
@property (copy, nonatomic) NSString *typeTextColor;
@property (copy, nonatomic) NSString *typeTextLightColor;
@property (copy, nonatomic) NSString *typeTextBackgroundColor;
@property (copy, nonatomic) NSString *typeTextLightBackgroundColor;
@property (copy, nonatomic) NSString *infoText;
@property (copy, nonatomic) NSString *priceText;
@property (copy, nonatomic) NSString *recruitedText;
@property (nonatomic) long long style;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
