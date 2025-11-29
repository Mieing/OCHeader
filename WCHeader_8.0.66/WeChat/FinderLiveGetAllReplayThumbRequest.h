@class BaseRequest, FinderBaseRequest, NSData;

@interface FinderLiveGetAllReplayThumbRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
