@interface WeChatWalletInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long walletBalance;
@property (nonatomic) unsigned long long lqtWalletBalance;

+ (void)initialize;

@end
