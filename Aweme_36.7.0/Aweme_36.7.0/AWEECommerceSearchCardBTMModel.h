@class NSString, NSDictionary;

@interface AWEECommerceSearchCardBTMModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;
@property (copy, nonatomic) NSDictionary *areaBtm;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
