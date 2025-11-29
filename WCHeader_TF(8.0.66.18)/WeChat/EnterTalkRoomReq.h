@class BaseRequest, NSString;

@interface EnterTalkRoomReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *toUsername;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
