@class BaseResponse;

@interface GetWxaUserSwitchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int discoveryEntranceUseFake;

+ (void)initialize;

@end
