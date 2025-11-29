@class BaseRequest, NSString, HwDeviceMsg;

@interface TransferMsgToDeviceReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) HwDeviceMsg *deviceMsg;
@property (nonatomic) int isThroughtServer;

+ (void)initialize;

@end
