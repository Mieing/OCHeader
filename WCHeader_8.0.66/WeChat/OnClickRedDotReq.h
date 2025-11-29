@class BaseRequest, NSString;

@interface OnClickRedDotReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reddotId;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
