@class WxaAppBaseResponse, BaseResponse;

@interface UpdateWxaUsageRecordResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;

+ (void)initialize;

@end
