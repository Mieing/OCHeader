@class MigrateMsgProtocol, MigrateMsgDeviceInfo, BaseResponse;

@interface MigrateMsgDecryptKeyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MigrateMsgDeviceInfo *deviceInfo;
@property (retain, nonatomic) MigrateMsgProtocol *protocol;
@property (nonatomic) unsigned long long flag;

+ (void)initialize;

@end
