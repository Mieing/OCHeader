@class UserMgrBaseResponse, BaseResponse;

@interface DelUserAuthResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) UserMgrBaseResponse *usermgrBaseresp;

+ (void)initialize;

@end
