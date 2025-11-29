@class QyBaseResponse, BaseResponse;

@interface SwitchBrandResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;

+ (void)initialize;

@end
