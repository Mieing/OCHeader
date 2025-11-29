@class BaseRequest, NSString;

@interface WebCommPrefetchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reqStr;

+ (void)initialize;

@end
