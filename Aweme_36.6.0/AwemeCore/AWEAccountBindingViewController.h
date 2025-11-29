@class AWESettingBaseViewModel;

@interface AWEAccountBindingViewController : AWESettingBaseViewController {
    AWESettingBaseViewModel *_viewModel;
}

@property (nonatomic) BOOL isUsingXiguaSDK;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)viewModel;

@end
