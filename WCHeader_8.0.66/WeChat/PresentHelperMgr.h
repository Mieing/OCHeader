@class NSCountedSet, NSString, NSMutableArray, UIViewController;

@interface PresentHelperMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *tmpCannotShowViewControllers;
@property (retain, nonatomic) NSCountedSet *slientlyPreparePresentStackVCSet;
@property (weak, nonatomic) UIViewController *slientlyPreparePresentToRemoveTopWebviewVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)shouldIgnoreAppearLifeCycle:(id)a0;
- (BOOL)inSlientlyPreparePresentStack:(id)a0;
- (BOOL)isSlientlyPreparePresentToRemoveTopWebviewVC:(id)a0;
- (void)markSlientlyPreparePresentToRemoveTopWebviewVC:(id)a0;
- (void)resetSlientlyPreparePresentToRemoveTopWebviewVC;
- (void)slientlyPreparePresentStackForPresentationFor:(id)a0 NeedSaveNavigationStackAfter:(BOOL)a1 Completion:(id /* block */)a2;
- (void)PresentSlientlyFrom:(id)a0 NeedPresentViewControllerList:(id)a1 ToVCIndex:(long long)a2 Completion:(id /* block */)a3;
- (id)getPresentationStack:(id)a0 NeedNavigationStack:(BOOL)a1;
- (void)addViewControllersToNavigationController:(id)a0 ViewControllers:(id)a1;
- (id)addSnapShotOf:(id)a0 ToViewControllerList:(id)a1;
- (id)getSnapShotViewFor:(id)a0;
- (void)removeSnapshotViews:(id)a0;
- (BOOL)isViewControllerCanSetStatusBarStyleWhenSlientProcess:(id)a0;
- (void).cxx_destruct;

@end
