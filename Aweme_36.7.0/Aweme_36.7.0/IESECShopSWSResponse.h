@class NSDictionary, IESECShopBlock;

@interface IESECShopSWSResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECShopBlock *block;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *perfLogExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
