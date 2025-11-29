@class BaseRequest, NSMutableArray;

@interface BatchGetSimpleChatroomMemberRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *usernameList;

+ (void)initialize;

@end
