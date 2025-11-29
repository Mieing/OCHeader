@class BaseRequest, NSString;

@interface TickleSomeoneRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (retain, nonatomic) NSString *toUsername;

+ (void)initialize;

@end
