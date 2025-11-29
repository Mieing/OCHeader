@class BaseRequest, NSString, FinderLiveClientStatus, FinderBaseRequest;

@interface FinderGetLatestLiveObjectRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) FinderLiveClientStatus *clientStatus;

+ (void)initialize;

@end
