@class BaseRequest;

@interface MMListenGetSearchTrendsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) BOOL isPreload;

+ (void)initialize;

@end
