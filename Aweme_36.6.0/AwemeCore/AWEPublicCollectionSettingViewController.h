@class NSString, AWESettingBaseViewModel;

@interface AWEPublicCollectionSettingViewController : AWESettingBaseViewController <AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)addBinding;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)viewModel;

@end
