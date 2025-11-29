@interface AWEIMRecentChatListRequestContext : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) BOOL filterNotFriendUser;
@property (copy, nonatomic) id /* block */ requestCompletion;

- (void).cxx_destruct;

@end
