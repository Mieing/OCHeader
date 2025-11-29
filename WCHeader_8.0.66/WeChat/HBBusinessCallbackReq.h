@class BaseRequest, NSString;

@interface HBBusinessCallbackReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *sendId;
@property (retain, nonatomic) NSString *transId;
@property (retain, nonatomic) NSString *idSign;
@property (nonatomic) unsigned int unionSource;

+ (void)initialize;

@end
