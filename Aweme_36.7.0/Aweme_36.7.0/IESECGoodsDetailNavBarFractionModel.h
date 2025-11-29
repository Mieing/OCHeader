@class NSString;

@interface IESECGoodsDetailNavBarFractionModel : IESECBaseApiModel

@property (copy, nonatomic) NSString *sliceKey;
@property (nonatomic) BOOL reverse;
@property (nonatomic) double start;
@property (nonatomic) double end;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
