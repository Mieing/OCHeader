@class NSMutableDictionary, NSString, MMStatusBarCustomInfo, NSMutableArray;

@interface MMStatusBarManager : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) MMStatusBarCustomInfo *globalOverrideInfo;
@property (retain, nonatomic) NSMutableDictionary *customStatusTable;
@property (retain, nonatomic) NSMutableArray *statusBarActions;
@property (nonatomic) BOOL isRunningStatusBarAction;
@property (nonatomic) double preferredStatusBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addStatusBarAction:(id /* block */)a0;
- (void)performQueuingAction;
- (void)setStatusBarHidden:(BOOL)a0 forViewController:(id)a1;
- (void)setStatusBarStyle:(long long)a0 forViewController:(id)a1;
- (void)setStatusBarAnimation:(long long)a0 forViewController:(id)a1;
- (BOOL)shouldOverrideStatusBarHiddenFor:(id)a0;
- (BOOL)shouldOverrideStatusBarStyleFor:(id)a0;
- (BOOL)shouldOverrideStatusBarAnimation:(id)a0;
- (BOOL)statusBarHiddenForViewController:(id)a0;
- (long long)statusBarStyleForViewController:(id)a0;
- (long long)statusBarAnimationForViewController:(id)a0;
- (void)onViewControllerChange;
- (void)removeViewControllerConfig:(id)a0;
- (void)removeAllViewControllerConfigs;
- (id)createCustomInfoFor:(id)a0;
- (id)getCustomInfoFor:(id)a0;
- (void)updateSystemNavigationBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
