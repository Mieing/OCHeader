@class BaseRequest, Remind;

@interface SetMsgRemindRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opType;
@property (retain, nonatomic) Remind *remind;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
