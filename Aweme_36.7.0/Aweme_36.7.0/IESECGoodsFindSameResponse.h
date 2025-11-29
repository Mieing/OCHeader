@class NSArray;

@interface IESECGoodsFindSameResponse : IESECBaseApiModel

@property (copy, nonatomic) NSArray *goodsListV3;
@property (copy, nonatomic) NSArray *goodsList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
