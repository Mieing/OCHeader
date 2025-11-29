@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEUserHomeTrackServiceComponent : AWEUserHomeBaseComponent <AWEUserTrackServiceProtocol, AWEUserHomeTrackServiceComponentProtocol>

@property (copy, nonatomic) id /* block */ headerErrorBlock;
@property (retain, nonatomic) NSMutableArray *tabTypeArray;
@property (retain, nonatomic) NSMutableDictionary *tabTypeErrorDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeLoadIndexDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeCellDisplayDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeRequestCountDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeCoverLoadResultDict;
@property (copy, nonatomic) NSString *selectedTabName;
@property (nonatomic) long long lastSelectedTabType;
@property (nonatomic) double showOnScreenTime;
@property (nonatomic) BOOL hasTrackedLeaveHomepage;
@property (nonatomic) BOOL hasTrackAutoTabShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL switchFavouriteTabFromClickToast;

- (id)tabHelper;
- (long long)currentSelectedIndex;
- (id)segmentView;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void)uiOrchestrationComponent:(id)a0 didSelectTabAtIndex:(long long)a1 hasRedDotWhenSwitched:(BOOL)a2 actionType:(unsigned long long)a3;
- (void)onDidSyncAwemeUser:(id)a0 error:(id)a1;
- (void)requestCompletionWithTabType:(long long)a0 error:(id)a1 refresh:(BOOL)a2 ext:(id)a3;
- (void)cellWillDisplayWithTabType:(long long)a0 secondTabLogName:(id)a1 item:(long long)a2;
- (void)videoCoverLoadResult:(long long)a0 secTabType:(id)a1 awemeModel:(id)a2 error:(id)a3 index:(long long)a4 ext:(id)a5;
- (void)trackImageLoadResult:(id)a0 url:(id)a1 error:(id)a2 extra:(id)a3;
- (void)homePageDisappearWithTabType:(long long)a0 ext:(id)a1;
- (void)trackPersonalTabDurationWithTabString:(id)a0 secondTabString:(id)a1 duration:(long long)a2;
- (void)onLeaveHomePageTab;
- (BOOL)p_isVsOfficialAccount;
- (BOOL)isShowingUserHomeTabType:(long long)a0;
- (id)segmentHomeComponent;
- (id)extraTrackParamsForCover:(id)a0;
- (void)trackLeaveHomepageIsClickBackButton:(BOOL)a0;
- (void)p_checkCompletion;
- (BOOL)enableTrackVideoCover;
- (void)p_completionWith:(id)a0 headerError:(id)a1;
- (void)trackEnterPersonalTab:(long long)a0 enterMethod:(id)a1 hasRedDotWhenSwitched:(BOOL)a2;
- (void)checkAndTrackUserNotSync;
- (void)p_checkCellWillDisplayTrack;
- (void)trackChangeProfileTab:(long long)a0 enterMethod:(id)a1 hasRedDotWhenSwitched:(BOOL)a2;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)user;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)onInit;

@end
