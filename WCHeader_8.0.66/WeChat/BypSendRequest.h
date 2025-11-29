@class BaseRequest, BypMsgPack;

@interface BypSendRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int bizType;
@property (retain, nonatomic) BypMsgPack *msgPack;

+ (void)initialize;

@end
