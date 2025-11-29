@class WxaAppBaseResponse, NSMutableArray, BaseResponse;

@interface WxaAppModAuthResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;
@property (retain, nonatomic) NSMutableArray *authItem;

+ (void)initialize;

@end
