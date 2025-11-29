@class SKBuiltinBuffer_t, NSString, WxVerifyCodeReqInfo, WTLoginImgReqInfo;

@interface BaseAuthReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *wtloginReqBuff;
@property (retain, nonatomic) WTLoginImgReqInfo *wtloginImgReqInfo;
@property (retain, nonatomic) WxVerifyCodeReqInfo *wxVerifyCodeReqInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *cliDbencryptKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *cliDbencryptInfo;
@property (nonatomic) unsigned int authReqFlag;
@property (retain, nonatomic) NSString *authTicket;

+ (void)initialize;

- (void)setAuthTicket:(id)a0;
- (id)authTicket;
- (void)setAuthReqFlag:(unsigned int)a0;
- (unsigned int)authReqFlag;
- (void)setCliDbencryptInfo:(id)a0;
- (id)cliDbencryptInfo;
- (void)setCliDbencryptKey:(id)a0;
- (id)cliDbencryptKey;
- (void)setWxVerifyCodeReqInfo:(id)a0;
- (id)wxVerifyCodeReqInfo;
- (void)setWtloginImgReqInfo:(id)a0;
- (id)wtloginImgReqInfo;
- (void)setWtloginReqBuff:(id)a0;
- (id)wtloginReqBuff;

@end
