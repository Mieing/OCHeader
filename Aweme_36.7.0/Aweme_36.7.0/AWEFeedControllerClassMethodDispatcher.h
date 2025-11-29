@class NSString;
@protocol AWEFeedContainerBaseConfigProtocol;

@interface AWEFeedControllerClassMethodDispatcher : NSObject <AWEFeedControllerClassMethodDispatcherProtocol>

@property (retain, nonatomic) id<AWEFeedContainerBaseConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (void)containerInstanceInit:(id)a0;
- (void)containerInstanceDealloc:(id)a0;
- (void)containerInstanceLoadView:(id)a0;
- (void)containerInstanceSetupConfig:(id)a0;
- (void)containerInstanceConfigRouterParamDict:(id)a0 container:(id)a1;
- (void)containerInstanceWillLoad:(id)a0;
- (void)containerInstanceDidLoad:(id)a0;
- (void)containerInstanceWillSetupTableView:(id)a0;
- (void)containerInstanceRegisterTableViewCell:(id)a0;
- (void)containerInstanceDidSetupTableView:(id)a0;
- (void)containerInstanceBeforeWillAppear:(id)a0;
- (void)containerInstanceAfterWillAppear:(id)a0;
- (void)containerInstanceBeforeDidAppear:(id)a0;
- (void)containerInstanceAfterDidAppear:(id)a0;
- (void)containerInstanceBeforeWillDisappear:(id)a0;
- (void)containerInstanceAfterWillDisappear:(id)a0;
- (void)containerInstanceBeforeDidDisappear:(id)a0;
- (void)containerInstanceAfterDidDisappear:(id)a0;
- (void)containerInstanceDidLayoutSubviews:(id)a0;
- (void)containerInstanceWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1 container:(id)a2;
- (void)containerInstanceWillEndCoordinatorTransitionAnimation:(struct CGSize { double x0; double x1; })a0 container:(id)a1;
- (void)cellInstanceWillConfig:(id)a0 withModel:(id)a1 atIndexPath:(id)a2 container:(id)a3;
- (void)cellInstanceWillSetParentVC:(id)a0 withModel:(id)a1 atIndexPath:(id)a2 container:(id)a3;
- (void)cellInstanceDidSetParentVC:(id)a0 withModel:(id)a1 atIndexPath:(id)a2 container:(id)a3;
- (void)cellInstanceDidConfig:(id)a0 withModel:(id)a1 atIndexPath:(id)a2 container:(id)a3;
- (void)tableViewInstanceDidSelectRow:(id)a0 atIndexPath:(id)a1 container:(id)a2;
- (void)tableViewInstanceWillDisplayCell:(id)a0 withTableView:(id)a1 atIndexPath:(id)a2 container:(id)a3;
- (void)tableViewInstanceDidDisplayCell:(id)a0 withTableView:(id)a1 atIndexPath:(id)a2 container:(id)a3;
- (void)tableViewInstanceBeforeDidEndDisplayCell:(id)a0 withTableView:(id)a1 atIndexPath:(id)a2 container:(id)a3;
- (void)tableViewInstanceAfterDidEndDisplayCell:(id)a0 withTableView:(id)a1 atIndexPath:(id)a2 container:(id)a3;
- (void)tableViewInstanceDidEndDisplayCellBeforeReset:(id)a0 withTableView:(id)a1 atIndexPath:(id)a2 container:(id)a3;
- (void).cxx_destruct;

@end
