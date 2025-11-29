@class NSString;

@interface AWESearchMerchandiseLogInfoStruct : AWEBaseApiModel

@property (copy, nonatomic) NSString *recommendType;
@property (copy, nonatomic) NSString *recommendText;
@property (copy, nonatomic) NSString *priceInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
