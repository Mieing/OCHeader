@class BaseResponse;

@interface CdpActionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;

+ (void)initialize;

@end
