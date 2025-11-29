@class NSMutableArray;

@interface HTSLivePriceInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *priceListArray;
@property (readonly, nonatomic) unsigned long long priceListArray_Count;

+ (id)descriptor;

@end
