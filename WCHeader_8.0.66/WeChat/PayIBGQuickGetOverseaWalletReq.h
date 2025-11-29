@class BaseRequest;

@interface PayIBGQuickGetOverseaWalletReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int walletTpaCountryMask;

+ (void)initialize;

@end
