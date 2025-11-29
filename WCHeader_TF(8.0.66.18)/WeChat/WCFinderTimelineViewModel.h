@class FinderTeenagerInfo, NSArray, WCFinderFeedContentVM, FinderRecommendCloseConfig, FinderNewUserPrepareResponse, WCFinderSearchStatReportShim;

@interface WCFinderTimelineViewModel : NSObject

@property (nonatomic) BOOL showPostMenu;
@property (retain, nonatomic) FinderRecommendCloseConfig *recommentCloseConfig;
@property (nonatomic) BOOL postFeedInsertMachineTab;
@property (retain, nonatomic) WCFinderSearchStatReportShim *searchStatCollecter;
@property (nonatomic) BOOL timelineNoMoreCanShowHotSwitch;
@property (nonatomic) BOOL enableShowCity;
@property (nonatomic) BOOL enableShowFollowTab;
@property (nonatomic) BOOL enableShowRecommendTab;
@property (nonatomic) BOOL enableShowMachineTab;
@property (nonatomic) BOOL timelineScrollPageFeature;
@property (retain, nonatomic) NSArray *tabConfigArray;
@property (nonatomic) long long enterTLTabByFindPage;
@property (nonatomic) BOOL alreadyCheckLimitModeGuide;
@property (nonatomic) long long lastMachineRefreshTimeStamp;
@property (nonatomic) BOOL cancelSpeedViewAnimateBlock;
@property (retain, nonatomic) WCFinderFeedContentVM *lastPostBubbleContentVM;
@property (nonatomic) long long machineTabConfigStyle;
@property (retain, nonatomic) FinderNewUserPrepareResponse *prepareResponse;
@property (retain, nonatomic) FinderTeenagerInfo *teenagerInfo;

- (id)init;
- (void)setUpNecessaryData;
- (void)setUpSwitchConfig;
- (void)setUpBusinessInfo;
- (void)setUpTabConfigPriority;
- (void).cxx_destruct;

@end
