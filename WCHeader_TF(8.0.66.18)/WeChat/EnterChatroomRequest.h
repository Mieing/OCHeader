@class BaseRequest, NSString;

@interface EnterChatroomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;

+ (void)initialize;

@end
