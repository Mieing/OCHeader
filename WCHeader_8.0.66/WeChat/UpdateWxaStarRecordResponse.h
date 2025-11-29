@class WxaAppBaseResponse, BaseResponse;

@interface UpdateWxaStarRecordResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;

+ (void)initialize;

@end
