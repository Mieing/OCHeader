@class NSString, WalletBalancePrivacyVO, BaseResponse;

@interface QueryWalletEntranceBalanceSwitchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int switchState;
@property (retain, nonatomic) WalletBalancePrivacyVO *pageData;

+ (void)initialize;

@end
