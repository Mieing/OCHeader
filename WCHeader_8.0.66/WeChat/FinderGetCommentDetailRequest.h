@class NSData, NSString, StreamTabTipsInfo, FinderBaseRequest, BaseRequest, FinderLiveReportBaseInfo, FinderShareUserInfo, FinderClientStatus, FinderLivePermissionVerifyInfo;

@interface FinderGetCommentDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long objectid;
@property (nonatomic) unsigned long long maxCommentId;
@property (nonatomic) unsigned int needObject;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long rootCommentId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long refCommentId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int direction;
@property (retain, nonatomic) NSString *encryptedObjectid;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int identityScene;
@property (nonatomic) unsigned int pullScene;
@property (retain, nonatomic) NSData *likeBuffer;
@property (nonatomic) unsigned int platformScene;
@property (nonatomic) unsigned int needSelection;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo;
@property (retain, nonatomic) NSData *traceBuffer;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int shareTime;
@property (retain, nonatomic) NSString *shortUrl;
@property (retain, nonatomic) NSString *tipsId;
@property (nonatomic) BOOL needUnencryptedLink;
@property (retain, nonatomic) StreamTabTipsInfo *tabTipsInfo;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (retain, nonatomic) FinderShareUserInfo *shareUserInfo;
@property (nonatomic) unsigned int relatedScene;
@property (retain, nonatomic) NSString *fromSessionId;
@property (retain, nonatomic) NSString *containerId;

+ (void)initialize;

@end
