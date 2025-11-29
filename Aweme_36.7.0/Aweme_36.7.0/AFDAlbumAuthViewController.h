@class NSString, AWESettingBaseViewModel;

@interface AFDAlbumAuthViewController : AWESettingBaseViewController <AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)refreshView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)viewModel;

@end
