@class BaseRequest, NSMutableArray;

@interface GetChatroomMemberInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *usernameList;

+ (void)initialize;

@end
