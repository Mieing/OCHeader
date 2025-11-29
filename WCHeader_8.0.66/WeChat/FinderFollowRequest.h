@class BaseRequest, NSString, FinderLiveReportBaseInfo, FinderBaseRequest, NSData, FinderFollowNewLifeReportInfo;

@interface FinderFollowRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *posterUsername;
@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned long long refObjectid;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *refObjectNonceId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int enterType;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (nonatomic) unsigned int followScene;
@property (retain, nonatomic) NSData *refLiveCookies;
@property (nonatomic) unsigned long long fromMentionId;
@property (retain, nonatomic) NSData *uxInfo;
@property (nonatomic) unsigned int enhanceFollowBtn;
@property (retain, nonatomic) FinderFollowNewLifeReportInfo *newlifeReportInfo;

+ (void)initialize;

@end
