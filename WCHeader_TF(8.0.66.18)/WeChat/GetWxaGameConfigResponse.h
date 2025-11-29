@class WxaGameServerSampleConfig, BaseResponse, GetWxaGameConfigResponse_WxagGameReviewsConfig, GetWxaGameConfigResponse_WxagGameOriginalReviewConfig, WxaGameSampleConfig;

@interface GetWxaGameConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaGameSampleConfig *perfSampleConfig;
@property (retain, nonatomic) WxaGameServerSampleConfig *serverSampleConfig;
@property (retain, nonatomic) GetWxaGameConfigResponse_WxagGameOriginalReviewConfig *originalReviewConfig;
@property (retain, nonatomic) GetWxaGameConfigResponse_WxagGameReviewsConfig *gameReviewConfig;

+ (void)initialize;

@end
