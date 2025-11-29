@class NSString;

@interface IncentiveAsset : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) long long amount;

+ (id)descriptor;

@end
