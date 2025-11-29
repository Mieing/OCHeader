@class BaseRequest, NSString;

@interface SubscribeNewGameRequest_V2 : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) BOOL hasEnableChatroom;

+ (void)initialize;

@end
