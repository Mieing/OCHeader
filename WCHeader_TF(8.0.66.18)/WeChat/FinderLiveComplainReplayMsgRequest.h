@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveComplainReplayMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *frameId;
@property (nonatomic) unsigned long long msgSeq;

+ (void)initialize;

@end
