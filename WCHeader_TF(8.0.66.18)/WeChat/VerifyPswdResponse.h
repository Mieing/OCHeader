@class BaseResponse, SKBuiltinString_t, NSString, SKBuiltinBuffer_t;

@interface VerifyPswdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinString_t *imgSid;
@property (retain, nonatomic) SKBuiltinBuffer_t *imgBuf;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) SKBuiltinString_t *imgEncryptKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *a2Key;
@property (retain, nonatomic) SKBuiltinBuffer_t *ksid;
@property (retain, nonatomic) NSString *authKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *wtloginRspBuff;
@property (retain, nonatomic) SKBuiltinBuffer_t *authAuthKey;

+ (void)initialize;

@end
