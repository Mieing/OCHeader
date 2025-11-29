@class WxaAppBaseResponse, BaseResponse;

@interface SetGDRPAuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *businessResp;

+ (void)initialize;

@end
