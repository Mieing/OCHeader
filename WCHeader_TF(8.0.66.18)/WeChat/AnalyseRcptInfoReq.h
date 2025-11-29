@class BaseRequest, NSString;

@interface AnalyseRcptInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *address;

+ (void)initialize;

@end
