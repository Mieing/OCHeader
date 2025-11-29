@class BaseRequest;

@interface GetRecommendVideoListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int limit;

+ (void)initialize;

@end
