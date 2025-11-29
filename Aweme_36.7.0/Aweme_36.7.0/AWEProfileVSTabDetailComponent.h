@class NSString, UIViewController;
@protocol AWELiveVSTabViewControllerProtocol;

@interface AWEProfileVSTabDetailComponent : AWEUserDetailBaseComponent <AWEUserMessage, AWEProfileTabListProviderProtocol, AWEProfileVSTabComponentProtocol>

@property (retain, nonatomic) UIViewController<AWELiveVSTabViewControllerProtocol> *vsProgramVC;
@property (copy, nonatomic) NSString *justWatchedRelevantEpisodeID;
@property (nonatomic) BOOL hideJustWatchedShow;
@property (nonatomic) double startEnterTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)updateFloatFormatViewAlpha:(double)a0;
- (void)updateTopCategoryViewContentBackgroundColor:(id)a0;
- (void)updateVSProgramVCBackgroundColor:(id)a0;
- (void)onTabList:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (void)onResetUI;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)onClickSegmentItemAgainAtIndex:(long long)a0;
- (id)enterFromItemAuthorID;
- (BOOL)p_isVsOfficialAccount;
- (void)trackVSStaytimeIfNeed;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)removeAll;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)onInit;

@end
