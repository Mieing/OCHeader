@class BaseRequest, NSString, NSData;

@interface GetChatSessionIdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (retain, nonatomic) NSString *toUsername;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSData *extInfo;

+ (void)initialize;

@end
