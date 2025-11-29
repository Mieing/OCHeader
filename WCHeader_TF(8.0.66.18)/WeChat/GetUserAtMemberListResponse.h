@class NSMutableArray, BaseResponse;

@interface GetUserAtMemberListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *atMemberUsernameList;

+ (void)initialize;

@end
