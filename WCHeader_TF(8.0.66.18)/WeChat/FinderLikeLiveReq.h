@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveReportBaseInfo;

@interface FinderLikeLiveReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long seq;
@property (nonatomic) unsigned int liveMsgType;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (nonatomic) unsigned int source;
@property (nonatomic) unsigned long long accumulateLikeCount;
@property (retain, nonatomic) NSString *sessionBuffer;

+ (void)initialize;

@end
