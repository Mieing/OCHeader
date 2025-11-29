@class BaseResponse;

@interface UpdateSafeDeviceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int safeDevice;

+ (void)initialize;

@end
