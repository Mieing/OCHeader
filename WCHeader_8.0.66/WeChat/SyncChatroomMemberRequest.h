@class BaseRequest, NSString;

@interface SyncChatroomMemberRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lastVersion;
@property (retain, nonatomic) NSString *chatroomName;

+ (void)initialize;

@end
