@class BaseRequest, NSString;

@interface GetChatroomMemberDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomUserName;
@property (nonatomic) unsigned int clientVersion;

+ (void)initialize;

@end
