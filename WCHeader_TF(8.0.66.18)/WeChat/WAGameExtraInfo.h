@class WxaGameBaseInfo, GetWxaGameConfigResponse_WxagGameReviewsConfig, GetWxaGameConfigResponse_WxagGameOriginalReviewConfig;

@interface WAGameExtraInfo : MMObject

@property (retain, nonatomic) GetWxaGameConfigResponse_WxagGameOriginalReviewConfig *gameEvaluateConfig;
@property (retain, nonatomic) GetWxaGameConfigResponse_WxagGameReviewsConfig *gameReviewConfig;
@property (retain, nonatomic) WxaGameBaseInfo *gameBaseInfo;

- (void).cxx_destruct;

@end
