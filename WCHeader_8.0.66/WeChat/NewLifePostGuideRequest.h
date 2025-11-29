@class BaseRequest, FinderBaseRequest, FinderObject;

@interface NewLifePostGuideRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderObject *object;
@property (nonatomic) unsigned int exposeIndex;
@property (nonatomic) unsigned int exposeTimeMs;

+ (void)initialize;

@end
