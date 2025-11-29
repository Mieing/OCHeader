@class NSString;

@interface WxaGetVoipDeviceListResp_DeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *modelId;
@property (retain, nonatomic) NSString *sn;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
