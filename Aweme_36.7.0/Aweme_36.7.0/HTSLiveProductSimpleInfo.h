@class NSString;

@interface HTSLiveProductSimpleInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *skuId;

+ (id)descriptor;

@end
