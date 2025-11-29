@class BaseRequest, NSString, FinderLivePermissionVerifyInfo, NSData, NSMutableArray, FinderBaseRequest;

@interface FinderAudienceReserveLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (retain, nonatomic) NSString *noticeId;
@property (nonatomic) unsigned int optype;
@property (nonatomic) unsigned long long refObjectId;
@property (retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo;
@property (retain, nonatomic) NSString *promoterToken;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int userPageEnterType;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *clientInfo;
@property (nonatomic) unsigned int noticeAggregateType;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) NSMutableArray *noticeAggregateTypeList;
@property (retain, nonatomic) NSData *liveCookies;
@property (retain, nonatomic) NSString *myFinderUsername;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *gmsgId;

+ (void)initialize;

@end
