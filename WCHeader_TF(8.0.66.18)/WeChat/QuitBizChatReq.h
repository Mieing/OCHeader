@class BaseRequest, NSString;

@interface QuitBizChatReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *brandUserName;
@property (retain, nonatomic) NSString *bizchatId;

+ (void)initialize;

@end
