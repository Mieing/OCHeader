@class FinderPressureCtrl, FinderLiveTabInfo, FinderLiveReportBaseInfo, FinderLbsTabTipsInfo, FinderBaseRequest, NSMutableArray, FinderLiveDiscoverPreloadInfo, NSString, FinderLiveBeforeJoinLiveRoomStatus, FinderSwitch, BaseRequest, FinderClientStatus, NSData, FinderLiveClientStatus, ClientSpecificConfig;

@interface FinderNavLiveStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) FinderLiveClientStatus *liveStatus;
@property (nonatomic) unsigned int pullType;
@property (retain, nonatomic) FinderSwitch *finderSwitch;
@property (retain, nonatomic) NSMutableArray *readStats;
@property (retain, nonatomic) NSMutableArray *markUnreadObjectList;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) FinderLbsTabTipsInfo *lbsTabTipsInfo;
@property (nonatomic) unsigned int isFreqControl;
@property (retain, nonatomic) FinderPressureCtrl *pressureCtrl;
@property (retain, nonatomic) NSString *byPass;
@property (retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus;
@property (nonatomic) unsigned int containerId;
@property (nonatomic) unsigned long long relatedObjectId;
@property (retain, nonatomic) NSMutableArray *containerContext;
@property (retain, nonatomic) FinderLiveTabInfo *liveTab;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (retain, nonatomic) FinderLiveDiscoverPreloadInfo *liveDiscoverPreloadInfo;
@property (retain, nonatomic) NSData *jumpNavliveBuffer;
@property (retain, nonatomic) NSString *fromCommentScene;
@property (retain, nonatomic) NSData *preNavliveMoreLiveObjectsBuffer;
@property (retain, nonatomic) ClientSpecificConfig *clientSpecConfig;

+ (void)initialize;

@end
