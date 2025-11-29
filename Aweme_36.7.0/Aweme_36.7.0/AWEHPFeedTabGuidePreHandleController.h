@protocol AWEHPFeedTabGuidePreHandleControllerDelegate;

@interface AWEHPFeedTabGuidePreHandleController : NSObject

@property (nonatomic) long long preHandleCount;
@property (weak, nonatomic) id<AWEHPFeedTabGuidePreHandleControllerDelegate> delegate;

- (void)addNotifications;
- (void)handleInitialFetchCompletion:(id)a0 error:(id)a1;
- (void)handleRefreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)handleTableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)handleLoadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)p_updateCurrentWindowCheckResult;
- (id)currentWindowAwemeList;
- (void)cleanOutWindowAwemesIfNeed;
- (id)safeAwemeAtIndex:(long long)a0;
- (id)p_generateCheckModelWithAweme:(id)a0;
- (void)p_startCheckSelectWithAwemeList:(id)a0;
- (void)p_cleanCheckModelIfNeedWithAweme:(id)a0;
- (id)p_generateLabelCandidateWithTagModel:(id)a0;
- (id)filterAvailableLabelCandidatesWithAllCandidates:(id)a0;
- (id)p_generateButtonCandidateWithButtonModel:(id)a0;
- (id)filterAvailableButtonCandidatesWithAllCandidates:(id)a0;
- (BOOL)p_preHandleAndCheckBtnCandidate:(id)a0;
- (BOOL)p_preHandleAndCheckLabelCandidate:(id)a0;
- (void)handleLabelShow:(id)a0;
- (void)handleButtonShow:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)setup;
- (void)removeNotifications;

@end
