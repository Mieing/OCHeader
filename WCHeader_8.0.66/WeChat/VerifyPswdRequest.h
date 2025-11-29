@class BaseRequest, NSString, SKBuiltinString_t, SKBuiltinBuffer_t;

@interface VerifyPswdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) NSString *pwd1;
@property (retain, nonatomic) NSString *pwd2;
@property (retain, nonatomic) SKBuiltinString_t *imgSid;
@property (retain, nonatomic) SKBuiltinString_t *imgCode;
@property (retain, nonatomic) SKBuiltinString_t *imgEncryptKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *ksid;
@property (nonatomic) unsigned int scence;
@property (retain, nonatomic) SKBuiltinBuffer_t *wtloginReqBuff;
@property (retain, nonatomic) SKBuiltinBuffer_t *authAuthKey;

+ (void)initialize;

@end
