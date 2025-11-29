@class BaseRequest, NSString;

@interface ConvertBizChatReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *corpId;
@property (retain, nonatomic) NSString *qychatType;
@property (retain, nonatomic) NSString *qychatId;

+ (void)initialize;

@end
