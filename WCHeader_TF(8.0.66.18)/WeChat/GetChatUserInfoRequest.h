@class BaseRequest, NSMutableArray;

@interface GetChatUserInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *usernameList;

+ (void)initialize;

@end
