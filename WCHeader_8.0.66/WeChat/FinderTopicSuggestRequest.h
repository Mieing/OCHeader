@class BaseRequest, NSString, FinderBaseRequest;

@interface FinderTopicSuggestRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
