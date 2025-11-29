@class NSString, UIView;

@interface AWEBCDColorHomeComponent : AWEUserHomeBaseComponent <AWEBCDColorComponentProtocol>

@property (retain, nonatomic) UIView *vsSlidingViewMaskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setupMaskView;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)relayoutVSSlidingViewMaskView;
- (void)p_refreshVSViewAlphaIfNeed;
- (void)refreshBCDColorWithUser:(id)a0;
- (id)vsProgramComponent;
- (void)onTabList:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (void)onThemeReload;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (void)onRefreshUserDataUseCache:(BOOL)a0;
- (void).cxx_destruct;
- (void)onInit;

@end
