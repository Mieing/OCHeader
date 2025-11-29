@class BaseRequest, MigrateMsgDeviceInfo;

@interface MigrateMsgUploadKeyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MigrateMsgDeviceInfo *deviceInfo;

+ (void)initialize;

@end
