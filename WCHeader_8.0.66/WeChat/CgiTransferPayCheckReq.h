@class BaseRequest, NSString;

@interface CgiTransferPayCheckReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *transferId;
@property (retain, nonatomic) NSString *transactionId;
@property (retain, nonatomic) NSString *receiverOpenid;
@property (nonatomic) unsigned long long fee;
@property (retain, nonatomic) NSString *extendStr;

+ (void)initialize;

@end
