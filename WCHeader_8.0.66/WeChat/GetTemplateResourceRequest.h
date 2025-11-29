@class BaseRequest, FinderBaseRequest;

@interface GetTemplateResourceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
