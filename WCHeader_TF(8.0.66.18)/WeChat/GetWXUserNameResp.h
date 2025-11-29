@class NSString, BaseResponse;

@interface GetWXUserNameResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *aliasname;

+ (void)initialize;

@end
