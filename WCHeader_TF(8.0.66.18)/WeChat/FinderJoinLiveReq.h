@class NSData, NSString, FinderLiveReportBaseInfo, FinderBaseRequest, BaseRequest, FinderLiveBeforeJoinLiveRoomStatus, FinderLiveClientStatus, FeedsPreviewJoinLiveMultiStyleInfo, FinderJoinLiveTabTipsInfo, FinderLiveDynamicCardVersion;

@interface FinderJoinLiveReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *livePkId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) int joinType;
@property (retain, nonatomic) NSString *shareUsername;
@property (nonatomic) unsigned int fromScene;
@property (nonatomic) unsigned long long refObjectId;
@property (retain, nonatomic) FinderJoinLiveTabTipsInfo *joinliveTabTipsInfo;
@property (retain, nonatomic) NSData *liveSei;
@property (retain, nonatomic) NSString *ecSource;
@property (retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (retain, nonatomic) FinderLiveClientStatus *clientStatus;
@property (nonatomic) unsigned int isKeepAliveReq;
@property (retain, nonatomic) NSData *uxInfo;
@property (retain, nonatomic) FinderLiveDynamicCardVersion *dynamicCardVersion;
@property (retain, nonatomic) NSString *finderForwardSource;
@property (retain, nonatomic) NSString *srcUrl;
@property (retain, nonatomic) FeedsPreviewJoinLiveMultiStyleInfo *feedsPreviewLiveMultiStyleInfo;
@property (nonatomic) BOOL onlyPlusUv;
@property (retain, nonatomic) NSString *joinliveWithPersonalColumnId;
@property (retain, nonatomic) NSString *funcMsgReportExtInfo;
@property (nonatomic) BOOL needCheckAutoSwipe;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) NSData *outRoomRealnameLikeInfo;

+ (void)initialize;

@end
