@class NSString;

@interface AWESearchAdShopInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
