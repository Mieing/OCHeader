@class NSString, NSDictionary;

@interface AWEYapLynxPromotionModel : AWEBaseApiModel

@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSDictionary *trackParams;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
