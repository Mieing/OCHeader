@class NSString, AWESettingBaseViewModel, UIView;

@interface AWEPrivacySettingFindMyWayViewController : AWESettingBaseViewController {
    AWESettingBaseViewModel *_viewModel;
}

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) UIView *indicatorLineView;
@property (nonatomic) BOOL hasAppear;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)viewModel;

@end
