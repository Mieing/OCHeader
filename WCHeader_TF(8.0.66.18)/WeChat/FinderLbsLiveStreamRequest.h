@class FinderLiveClientStatus, NSData, FinderBaseRequest, FinderLiveTabInfo, FinderSwitch, BaseRequest, FinderLbsTabTipsInfo, FinderPressureCtrl, NSMutableArray, NSString, FinderLiveBeforeJoinLiveRoomStatus, FinderClientStatus;

@interface FinderLbsLiveStreamRequest : WXPBGeneratedMessage

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
@property (retain, nonatomic) FinderLiveTabInfo *liveTab;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) FinderLbsTabTipsInfo *lbsTabTipsInfo;
@property (nonatomic) unsigned int isFreqControl;
@property (retain, nonatomic) FinderPressureCtrl *pressureCtrl;
@property (retain, nonatomic) NSString *byPass;
@property (nonatomic) unsigned int onlyFollowFeed;
@property (nonatomic) unsigned long long relatedObjectId;
@property (retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveRoomStatus;
@property (nonatomic) unsigned int needBannerCardStyle;
@property (retain, nonatomic) NSString *jumpNavliveBufferEncode;

+ (void)initialize;

@end
