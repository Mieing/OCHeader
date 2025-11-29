@class BaseRequest, NSString;

@interface CgiUnionTransferBeforeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *receiverWwUsername;
@property (retain, nonatomic) NSString *receiverEnterpriseName;
@property (retain, nonatomic) NSString *roomid;

+ (void)initialize;

@end
