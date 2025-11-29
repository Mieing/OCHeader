@class FinderPostLiveMsgReportInfo, BaseRequest, FinderLiveMsg, NSData, FinderBaseRequest, NSString, FinderLiveReportBaseInfo;

@interface FinderPostLiveMsgReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) FinderLiveMsg *msg;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderPostLiveMsgReportInfo *reportInfo;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;

+ (void)initialize;

@end
