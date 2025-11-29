@class BaseRequest, NSString;

@interface DismissChatroomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *roomId;

+ (void)initialize;

@end
