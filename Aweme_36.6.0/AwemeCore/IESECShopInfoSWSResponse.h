@class NSDictionary, IESECShopInfoSWSExtra;

@interface IESECShopInfoSWSResponse : IESECShopInfoResponse

@property (copy, nonatomic) NSDictionary *moduleData;
@property (copy, nonatomic) NSDictionary *block;
@property (retain, nonatomic) IESECShopInfoSWSExtra *extra;
@property (copy, nonatomic) NSDictionary *perfLogExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)parseData;

@end
