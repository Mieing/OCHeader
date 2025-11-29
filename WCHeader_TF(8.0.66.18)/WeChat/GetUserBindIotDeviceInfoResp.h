@class NSMutableArray, BaseResponse;

@interface GetUserBindIotDeviceInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int deviceCount;
@property (retain, nonatomic) NSMutableArray *iotDeviceList;

+ (void)initialize;

- (void)setIotDeviceList:(id)a0;
- (id)iotDeviceList;
- (void)setDeviceCount:(unsigned int)a0;
- (unsigned int)deviceCount;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
