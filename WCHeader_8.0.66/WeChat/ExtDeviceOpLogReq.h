@class BaseRequest, NSData;

@interface ExtDeviceOpLogReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *extDeviceId;
@property (nonatomic) unsigned int extDeviceClientVersion;
@property (nonatomic) unsigned int opcode;
@property (nonatomic) unsigned int setting;

+ (void)initialize;

@end
