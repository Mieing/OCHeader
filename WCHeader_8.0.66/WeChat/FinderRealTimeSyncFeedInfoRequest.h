@class BaseRequest, NSData, FinderBaseRequest, FinderRealTimeSyncFeedInfoRequestCtx;

@interface FinderRealTimeSyncFeedInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSData *requestBuffer;
@property (retain, nonatomic) FinderRealTimeSyncFeedInfoRequestCtx *ctx;

+ (void)initialize;

@end
