@class BaseRequest, FinderBaseRequest;

@interface FinderModRecentWatchLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int opType;

+ (void)initialize;

@end
