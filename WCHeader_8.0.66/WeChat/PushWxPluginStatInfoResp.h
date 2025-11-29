@class QyBaseResponse, BaseResponse;

@interface PushWxPluginStatInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;

+ (void)initialize;

@end
