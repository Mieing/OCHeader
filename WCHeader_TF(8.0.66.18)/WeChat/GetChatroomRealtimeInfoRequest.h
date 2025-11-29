@class BaseRequest, NSString;

@interface GetChatroomRealtimeInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatroomName;
@property (retain, nonatomic) NSString *version;

+ (void)initialize;

@end
