@class BaseRequest, NSString, FinderLiveClientStatus, FinderBaseRequest;

@interface FinderWatchLiveScanRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) FinderLiveClientStatus *clientStatus;

+ (void)initialize;

@end
