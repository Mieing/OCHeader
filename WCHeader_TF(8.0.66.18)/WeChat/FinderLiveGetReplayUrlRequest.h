@class BaseRequest, FinderBaseRequest;

@interface FinderLiveGetReplayUrlRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long replayId;

+ (void)initialize;

@end
