@class BaseRequest, NSString, SKBuiltinString_t, SKBuiltinBuffer_t;

@interface BindQQRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int qq;
@property (retain, nonatomic) NSString *pwd;
@property (retain, nonatomic) NSString *pwd2;
@property (retain, nonatomic) NSString *imgSid;
@property (retain, nonatomic) NSString *imgCode;
@property (nonatomic) unsigned int opcode;
@property (retain, nonatomic) SKBuiltinString_t *imgEncryptKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *ksid;
@property (nonatomic) unsigned int setAsMainAcct;
@property (retain, nonatomic) NSString *safeDeviceName;
@property (retain, nonatomic) NSString *safeDeviceType;
@property (retain, nonatomic) SKBuiltinBuffer_t *wtloginReqBuff;

+ (void)initialize;

@end
