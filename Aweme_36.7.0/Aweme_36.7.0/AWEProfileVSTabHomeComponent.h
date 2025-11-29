@class NSString, UIViewController;
@protocol AWELiveVSTabViewControllerProtocol;

@interface AWEProfileVSTabHomeComponent : AWEUserHomeBaseComponent <AWEProfileTabListProviderProtocol, AWEProfileVSTabComponentProtocol>

@property (retain, nonatomic) UIViewController<AWELiveVSTabViewControllerProtocol> *vsProgramVC;
@property (nonatomic) double startEnterTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFloatFormatViewAlpha:(double)a0;
- (void)updateTopCategoryViewContentBackgroundColor:(id)a0;
- (void)updateVSProgramVCBackgroundColor:(id)a0;
- (void)onTabList:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (void)onResetUI;
- (BOOL)p_isVsOfficialAccount;
- (void)p_trackVSEntranceIfNeed;
- (void)trackVSStaytimeIfNeed;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)removeAll;
- (void)viewDidDisappear;
- (void)onInit;

@end
