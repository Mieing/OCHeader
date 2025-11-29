@class BaseRequest, FinderBaseRequest, FinderClientStatus;

@interface FinderRefreshPreloadInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderClientStatus *status;

+ (void)initialize;

@end
