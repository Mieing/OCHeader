@class NSString, NSMutableDictionary, NSMutableArray, NSNumber;

@interface AWEUserDetailTrackServiceComponent : AWEUserDetailBaseComponent <AWEUserTrackServiceProtocol>

@property (copy, nonatomic) id /* block */ headerErrorBlock;
@property (retain, nonatomic) NSMutableArray *tabTypeArray;
@property (retain, nonatomic) NSMutableDictionary *tabTypeErrorDict;
@property (copy, nonatomic) NSString *currentPage;
@property (nonatomic) double showOnScreenTime;
@property (nonatomic) long long lastSelectedTabType;
@property (retain, nonatomic) NSMutableDictionary *tabLogNameDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeLoadIndexDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeCellDisplayDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeRequestCountDict;
@property (retain, nonatomic) NSMutableDictionary *tabTypeCoverLoadResultDict;
@property (copy, nonatomic) NSString *selectedTabName;
@property (nonatomic) BOOL hasTrackedLeaveHomepage;
@property (nonatomic) BOOL hasEnteredPage;
@property (retain, nonatomic) NSNumber *enterPageTime;
@property (nonatomic) BOOL hasUsedUserCache;
@property (nonatomic) BOOL hasUsedPostCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_isCurrentUser;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void)onBackButtonClicked:(id)a0;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (void)requestCompletionWithTabType:(long long)a0 error:(id)a1 refresh:(BOOL)a2 ext:(id)a3;
- (void)cellWillDisplayWithTabType:(long long)a0 secondTabLogName:(id)a1 item:(long long)a2;
- (void)videoCoverLoadResult:(long long)a0 secTabType:(id)a1 awemeModel:(id)a2 error:(id)a3 index:(long long)a4 ext:(id)a5;
- (void)trackImageLoadResult:(id)a0 url:(id)a1 error:(id)a2 extra:(id)a3;
- (void)recordUsedPreloadCache:(long long)a0;
- (id)extraTrackParamsForCover:(id)a0;
- (void)trackLeaveHomepageIsClickBackButton:(BOOL)a0;
- (void)trackUserRevisitIfNeeded;
- (void)trackPreCreateUserProfileWithModel:(id)a0;
- (void)trackPersonalTabShowDuration;
- (void)p_checkCompletion;
- (BOOL)enableTrackVideoCover;
- (void)p_completionWith:(id)a0 headerError:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)onInit;

@end
