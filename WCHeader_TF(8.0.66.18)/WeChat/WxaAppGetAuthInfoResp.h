@class WxaUseUserInfo, WxaAppBaseResponse, NSMutableArray, BaseResponse;

@interface WxaAppGetAuthInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WxaAppBaseResponse *wxaappBaseresponse;
@property (retain, nonatomic) NSMutableArray *authItem;
@property (retain, nonatomic) WxaUseUserInfo *useUserInfo;

+ (void)initialize;

@end
