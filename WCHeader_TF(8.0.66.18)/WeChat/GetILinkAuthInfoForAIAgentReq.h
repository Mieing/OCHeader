@class BaseRequest, NSString;

@interface GetILinkAuthInfoForAIAgentReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL userAuthed;

+ (void)initialize;

@end
