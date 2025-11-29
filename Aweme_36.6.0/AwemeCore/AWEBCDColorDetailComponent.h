@class NSString, UIView;

@interface AWEBCDColorDetailComponent : AWEUserDetailBaseComponent <AWEBCDColorComponentProtocol>

@property (retain, nonatomic) UIView *vsSlidingViewMaskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setupMaskView;
- (void)relayoutVSSlidingViewMaskView;
- (void)p_refreshVSViewAlphaIfNeed;
- (void)refreshBCDColorWithUser:(id)a0;
- (id)vsProgramComponent;
- (void)onTabList:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (void)onRefreshHeaderView:(id)a0 shouldRefreshTabView:(BOOL)a1;
- (void)onThemeReload;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void).cxx_destruct;
- (void)onInit;

@end
