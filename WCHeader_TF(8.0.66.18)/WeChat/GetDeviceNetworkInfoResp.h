@class NSMutableArray, BaseResponse;

@interface GetDeviceNetworkInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *deviceNetworkInfoList;

+ (void)initialize;

@end
