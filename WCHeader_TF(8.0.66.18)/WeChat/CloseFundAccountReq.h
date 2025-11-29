@class BaseRequest, NSString;

@interface CloseFundAccountReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *payPasswdEnc;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
