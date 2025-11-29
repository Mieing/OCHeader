@class NSMutableArray, BaseResponse;

@interface RoamGetDeviceListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *deviceList;

+ (void)initialize;

@end
