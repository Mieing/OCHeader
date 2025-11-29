@class BaseRequest, NSString, MMIotHwDeviceMsg;

@interface MMIotTransferMsgToDeviceReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int deviceType;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) MMIotHwDeviceMsg *deviceMsg;

+ (void)initialize;

@end
