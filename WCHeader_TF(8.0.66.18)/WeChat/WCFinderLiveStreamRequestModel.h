@class FinderLiveClientStatus, NSString, NSData, FinderLbsTabTipsInfo, FinderLiveBeforeJoinLiveRoomStatus, WCFinderLiveTabInfo, WCFinderRedDotCtrlInfo, NSMutableArray, FinderClientStatus;

@interface WCFinderLiveStreamRequestModel : NSObject

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
@property (retain, nonatomic) NSString *byPass;
@property (retain, nonatomic) FinderLiveBeforeJoinLiveRoomStatus *beforeJoinLiveStatus;
@property (nonatomic) unsigned long long containerId;
@property (nonatomic) unsigned long long relatedObjectId;
@property (retain, nonatomic) NSMutableArray *containerContext;
@property (retain, nonatomic) WCFinderLiveTabInfo *liveTabInfo;
@property (nonatomic) unsigned long long cacheDurationInSeconds;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *ctrlInfo;

- (void).cxx_destruct;

@end
