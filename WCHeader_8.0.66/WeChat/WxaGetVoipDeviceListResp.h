@class NSMutableArray, BaseResponse;

@interface WxaGetVoipDeviceListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *deviceList;

+ (void)initialize;

@end
