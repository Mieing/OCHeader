@class BaseRequest, NSData, NSString;

@interface PostLiveMessageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *cliMsgId;

+ (void)initialize;

@end
