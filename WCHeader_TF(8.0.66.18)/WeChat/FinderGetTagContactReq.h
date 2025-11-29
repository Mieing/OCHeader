@class BaseRequest, FinderBaseRequest;

@interface FinderGetTagContactReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
