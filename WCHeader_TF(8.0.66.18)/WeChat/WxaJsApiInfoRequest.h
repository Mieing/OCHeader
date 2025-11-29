@class BaseRequest, NSMutableArray, CommRequestSource;

@interface WxaJsApiInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *appinfoList;
@property (retain, nonatomic) CommRequestSource *requestSource;

+ (void)initialize;

@end
