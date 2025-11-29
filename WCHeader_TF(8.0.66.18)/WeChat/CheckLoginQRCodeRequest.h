@class BaseRequest, SKBuiltinBuffer_t, NSString;

@interface CheckLoginQRCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *randomEncryKey;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int timeStamp;
@property (nonatomic) unsigned int opcode;

+ (void)initialize;

@end
