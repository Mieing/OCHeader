@class BaseRequest, NSString;

@interface CgiUnionTransferPayCheckReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *transferId;
@property (retain, nonatomic) NSString *roomid;

+ (void)initialize;

@end
