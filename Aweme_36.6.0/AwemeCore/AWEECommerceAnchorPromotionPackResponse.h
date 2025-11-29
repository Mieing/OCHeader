@class NSDictionary;

@interface AWEECommerceAnchorPromotionPackResponse : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *promotions;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
