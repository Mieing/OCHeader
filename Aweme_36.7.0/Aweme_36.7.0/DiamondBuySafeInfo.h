@class NSString;

@interface DiamondBuySafeInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *diamondSafe;
@property (copy, nonatomic) NSString *diamondExtraSafe;

+ (id)descriptor;

@end
