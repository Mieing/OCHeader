@class BaseRequest, NSString;

@interface CloseReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) NSString *payPasswdEnc;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
