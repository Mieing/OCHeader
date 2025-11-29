@class NSString;

@interface HTSLiveProductSaleInfo : IESLivePBBaseMessage

@property (nonatomic) long long saleCnt;
@property (nonatomic) long long helpingSaleCnt;
@property (copy, nonatomic) NSString *writtenOffAmount;

+ (id)descriptor;

@end
