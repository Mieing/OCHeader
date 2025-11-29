@class NSDictionary, NSString;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNavigationControllerManager : NSObject <AWEProfileNavigationContainerLifeCycleProtocol>

@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *itemControllerDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)onWillRefreshWithUser:(id)a0;
- (void)onDidRequestUser:(id)a0 error:(id)a1;
- (void)onFitNavigationLayoutClash;
- (void)onThemeChange:(BOOL)a0;
- (id)leftNavigationDataSource;
- (id)rightNavigationDataSource;
- (void)lifeCycleDistributeWithSelector:(SEL)a0;
- (void)createItemControllers;
- (id)dataSourceWithFixArray:(id)a0 dynamicArray:(id)a1 dynamicMaxCount:(long long)a2;
- (id)allItemControllers;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
