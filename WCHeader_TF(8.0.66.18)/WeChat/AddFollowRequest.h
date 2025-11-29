@class BaseRequest, NSMutableArray;

@interface AddFollowRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *usernames;

+ (void)initialize;

@end
