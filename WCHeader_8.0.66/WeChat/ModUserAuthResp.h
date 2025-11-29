@class UserMgrBaseResponse, BaseResponse;

@interface ModUserAuthResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) UserMgrBaseResponse *usermgrBaseresp;

+ (void)initialize;

@end
