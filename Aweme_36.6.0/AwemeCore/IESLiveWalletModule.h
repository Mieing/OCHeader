@class NSString;

@interface IESLiveWalletModule : IESLivePBBaseMessage

@property (nonatomic) int moduleType;
@property (copy, nonatomic) NSString *moduleURL;

+ (id)descriptor;

@end
