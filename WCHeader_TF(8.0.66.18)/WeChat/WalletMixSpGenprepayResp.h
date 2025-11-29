@class NSString, CallbackRetryConf;

@interface WalletMixSpGenprepayResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *payGateUrl;
@property (retain, nonatomic) CallbackRetryConf *callbackRetryConf;
@property (nonatomic) unsigned int needDialog;
@property (retain, nonatomic) NSString *dialogText;

+ (void)initialize;

@end
