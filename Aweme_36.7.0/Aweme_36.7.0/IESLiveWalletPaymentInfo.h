@class NSString;

@interface IESLiveWalletPaymentInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *payMethod;

+ (id)descriptor;

@end
