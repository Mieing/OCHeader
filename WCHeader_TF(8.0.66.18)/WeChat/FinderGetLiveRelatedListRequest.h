@class NSData, NSString, FinderBaseRequest, FinderLbsTabTipsInfo, BaseRequest, FinderLiveClientStatus, FinderLiveBeforeJoinLiveRoomStatus, FinderPressureCtrl, NSMutableArray, FinderCommByPass, FinderLiveReportBaseInfo, FinderClientStatus;

@interface FinderGetLiveRelatedListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) FinderLbsTabTipsInfo *lbsTabTipsInfo;
@property (retain, nonatomic) FinderPressureCtrl *pressureCtrl;
@property (retain, nonatomic) NSString *byPass;
@property (retain, nonatomic) FinderCommByPass *commByPass;
@property (nonatomic) unsigned int pullType;
@property (retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus;
@property (retain, nonatomic) NSMutableArray *readStat;
@property (nonatomic) int curObjectIndex;
@property (retain, nonatomic) NSMutableArray *navContainerReadIds;
@property (retain, nonatomic) NSData *navLastBuffer;
@property (nonatomic) unsigned int requestScene;
@property (retain, nonatomic) NSData *navContainerLastBuffer;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (retain, nonatomic) NSData *liveCookies;

+ (void)initialize;

@end
