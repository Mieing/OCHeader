@class BaseRequest, NSString;

@interface CgiUnionTransferNotifyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *transferId;
@property (nonatomic) unsigned int from;

+ (void)initialize;

@end
