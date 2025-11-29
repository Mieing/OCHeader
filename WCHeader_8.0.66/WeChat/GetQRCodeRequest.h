@class BaseRequest, SKBuiltinString_t;

@interface GetQRCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinString_t *userName;
@property (nonatomic) unsigned int style;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) SKBuiltinString_t *qrCodeUrl;

+ (void)initialize;

@end
