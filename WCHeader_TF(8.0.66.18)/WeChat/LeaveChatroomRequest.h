@class BaseRequest, NSString;

@interface LeaveChatroomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;

+ (void)initialize;

@end
