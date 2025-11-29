@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface GetLoginQRCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;
@property (nonatomic) unsigned int opcode;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int extDevLoginType;
@property (retain, nonatomic) NSString *hardwareExtra;
@property (retain, nonatomic) NSString *softType;
@property (retain, nonatomic) SKBuiltinBuffer_t *msgContextPubKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;

+ (void)initialize;

@end
