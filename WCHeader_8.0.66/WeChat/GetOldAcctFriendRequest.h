@class BaseRequest, NSString;

@interface GetOldAcctFriendRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int cliSeq;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
