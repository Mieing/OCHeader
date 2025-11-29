@class NSString, AWESettingBaseViewModel;

@interface AWEGlobalDiskManagerViewController : AWESettingBaseViewController <AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (id)viewModel;

@end
