@class NSString, HTSEventContext, NSDictionary, NSDate;

@interface IESLiveFeedDrawerViewControllerContext : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isFromNearbyTV;
@property (copy, nonatomic) NSString *nearbyCityCode;
@property (nonatomic) BOOL shouldShowFollowDefaultTab;
@property (nonatomic) int insertRoomReason;
@property (nonatomic) int defaultTabId;
@property (copy, nonatomic) NSString *currentTalent;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSEventContext *originTrackContext;
@property (nonatomic) unsigned long long containerType;
@property (nonatomic) unsigned long long showPosition;
@property (nonatomic) BOOL isMultiTab;
@property (copy, nonatomic) NSString *placeHolderSearchContent;
@property (nonatomic) BOOL vcIsAppear;
@property (copy, nonatomic) NSString *liveEntrance;
@property (copy, nonatomic) NSString *entranceBTM;
@property (copy, nonatomic) NSDictionary *viewedRoomDetails;
@property (retain, nonatomic) NSDate *entranceClickTime;
@property (nonatomic) BOOL isVSDrawer;
@property (copy, nonatomic) NSString *vsSourceKey;
@property (nonatomic) BOOL isVSSportDrawer;
@property (nonatomic) BOOL isFromMatchRoom;
@property (copy, nonatomic) NSString *originEnterFrom;
@property (copy, nonatomic) NSString *originEnterMethod;

- (void).cxx_destruct;

@end
