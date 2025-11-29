@class SpeedTestNotify, BaseResponse;

@interface ClientSpeedTestResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SpeedTestNotify *uploadPacket;
@property (retain, nonatomic) SpeedTestNotify *downloadPacket;
@property (nonatomic) int retcode;
@property (nonatomic) unsigned int suspensionDuration;

+ (void)initialize;

@end
