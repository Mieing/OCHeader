@class NSString;

@interface AWEHotSpotFeedStateModel : NSObject

@property (nonatomic) BOOL hasConfigreInitialResponse;
@property (nonatomic) BOOL isHotWordsTapped;
@property (nonatomic) BOOL justClickFastSwitch;
@property (nonatomic) BOOL isResignActive;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL hasAppear;
@property (nonatomic) BOOL hasLaunch;
@property (nonatomic) BOOL hasTrackEnterTrendingPage;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL justPreload;
@property (nonatomic) BOOL isDiscussionCellInFullMode;
@property (nonatomic) BOOL isHotPointPanelShow;
@property (nonatomic) long long loadMoreTimeLineOnceCount;
@property (nonatomic) BOOL hasClickChangeHotSpot;
@property (nonatomic) unsigned long long requestMask;
@property (nonatomic) BOOL needReloadData;
@property (copy, nonatomic) NSString *lastPlayingAwemeID;

- (void).cxx_destruct;

@end
