@class BaseRequest, NSString;

@interface ExitTalkRoomReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (retain, nonatomic) NSString *toUsername;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
