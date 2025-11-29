@class LuckyBoxCaijingVoucher, NSString;

@interface LuckyBoxExpandAward : IESLivePBBaseMessage

@property (retain, nonatomic) LuckyBoxCaijingVoucher *caijingVoucher;
@property (nonatomic) BOOL hasCaijingVoucher;
@property (copy, nonatomic) NSString *extraAward;

+ (id)descriptor;

@end
