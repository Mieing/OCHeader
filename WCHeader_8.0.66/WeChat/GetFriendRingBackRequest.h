@class BaseRequest, NSString;

@interface GetFriendRingBackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) BOOL isSender;

+ (void)initialize;

@end
