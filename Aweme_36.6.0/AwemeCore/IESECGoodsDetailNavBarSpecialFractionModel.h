@class NSString;

@interface IESECGoodsDetailNavBarSpecialFractionModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *sliceKey;
@property (nonatomic) BOOL reverse;
@property (nonatomic) double startEdge;
@property (nonatomic) double endEdge;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
