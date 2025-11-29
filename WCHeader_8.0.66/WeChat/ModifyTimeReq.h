@class BaseRequest, NSString, TimeSpan;

@interface ModifyTimeReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) NSString *payPasswdEnc;
@property (retain, nonatomic) TimeSpan *time;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
