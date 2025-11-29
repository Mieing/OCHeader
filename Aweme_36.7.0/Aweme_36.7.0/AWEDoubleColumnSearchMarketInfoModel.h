@class NSString;

@interface AWEDoubleColumnSearchMarketInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *imgUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *deliveryFee;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *tokenType;
@property (nonatomic) long long jumpType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
