@class WxaAppBaseResponse, BaseResponse;

@interface GetGDRPAuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *businessResp;
@property (nonatomic) unsigned int state;

+ (void)initialize;

@end
