@class BaseRequest, NSMutableArray;

@interface EncryptForwardWxworkMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *msgList;

+ (void)initialize;

@end
