@class WxaSyncIssueDecryptKeyCmd, WxaSyncIssueLaunchCmd, WxaSyncInvalidCodeCmd, WxaSyncGetExptInfoCmd, WxaSyncPreLaunchCmd, WxaSyncGetContactCmd, WxaSyncPullGlobalConfCmd, WxaSyncInvalidContactCmd, WxaSyncGetCodeCmd, WxaSyncUpdateVersionCmd, WxaSyncJsApiControlBytesCmd, WxaSyncIssueContactCmd, WxaSyncBlockCgiRequestCmd;

@interface WxaSyncCmds : WXPBGeneratedMessage

@property (retain, nonatomic) WxaSyncGetContactCmd *getContact;
@property (retain, nonatomic) WxaSyncGetCodeCmd *getCode;
@property (retain, nonatomic) WxaSyncIssueContactCmd *issueContact;
@property (retain, nonatomic) WxaSyncIssueLaunchCmd *issueLaunch;
@property (retain, nonatomic) WxaSyncIssueDecryptKeyCmd *issueDecryptKey;
@property (retain, nonatomic) WxaSyncUpdateVersionCmd *updateVersion;
@property (retain, nonatomic) WxaSyncBlockCgiRequestCmd *blockCgiRequest;
@property (retain, nonatomic) WxaSyncPreLaunchCmd *preLaunch;
@property (retain, nonatomic) WxaSyncInvalidCodeCmd *invalidCode;
@property (retain, nonatomic) WxaSyncInvalidContactCmd *invalidContact;
@property (retain, nonatomic) WxaSyncPullGlobalConfCmd *pullGlobalConf;
@property (retain, nonatomic) WxaSyncGetExptInfoCmd *getExptInfo;
@property (retain, nonatomic) WxaSyncJsApiControlBytesCmd *getJsApiControlBytes;

+ (void)initialize;

@end
