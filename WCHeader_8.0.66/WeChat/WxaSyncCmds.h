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

- (void)setGetJsApiControlBytes:(id)a0;
- (id)getJsApiControlBytes;
- (void)setGetExptInfo:(id)a0;
- (id)getExptInfo;
- (void)setPullGlobalConf:(id)a0;
- (id)pullGlobalConf;
- (void)setInvalidContact:(id)a0;
- (id)invalidContact;
- (void)setInvalidCode:(id)a0;
- (id)invalidCode;
- (void)setPreLaunch:(id)a0;
- (id)preLaunch;
- (void)setBlockCgiRequest:(id)a0;
- (id)blockCgiRequest;
- (void)setUpdateVersion:(id)a0;
- (id)updateVersion;
- (void)setIssueDecryptKey:(id)a0;
- (id)issueDecryptKey;
- (void)setIssueLaunch:(id)a0;
- (id)issueLaunch;
- (void)setIssueContact:(id)a0;
- (id)issueContact;
- (void)setGetCode:(id)a0;
- (id)getCode;
- (void)setGetContact:(id)a0;
- (id)getContact;

@end
