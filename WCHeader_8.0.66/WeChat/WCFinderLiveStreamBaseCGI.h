@class FinderLiveClientStatus, NSString, NSData, FinderLbsTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, WCFinderLiveTabInfo, WCFinderRedDotCtrlInfo, NSMutableArray, FinderClientStatus;

@interface WCFinderLiveStreamBaseCGI : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) FinderClientStatus *clientStatus;
@property (retain, nonatomic) FinderLiveClientStatus *liveClientStatus;
@property (nonatomic) unsigned long long pullType;
@property (retain, nonatomic) NSMutableArray *readStats;
@property (retain, nonatomic) NSMutableArray *markUnreadList;
@property (nonatomic) int fromScene;
@property (retain, nonatomic) NSString *fromSceneStr;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) FinderLbsTabTipsInfo *tabTipsInfo;
@property (copy, nonatomic) NSString *byPass;
@property (retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveStatus;
@property (retain, nonatomic) WCFinderLiveTabInfo *liveTabInfo;
@property (nonatomic) unsigned long long containerId;
@property (nonatomic) unsigned long long relatedObjectId;
@property (nonatomic) unsigned long long cacheDurationInSeconds;
@property (retain, nonatomic) NSMutableArray *containerContext;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *ctrlInfo;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
