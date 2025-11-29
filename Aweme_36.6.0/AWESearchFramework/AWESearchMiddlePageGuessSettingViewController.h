@class NSString, UIImageView, UIView, AWESettingBaseViewModel;

@interface AWESearchMiddlePageGuessSettingViewController : AWESettingBaseViewController <AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (retain, nonatomic) UIImageView *indicateImageView;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)didThemeChanged;
- (void)refreshView;
- (void)updateSchematicImage;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)viewModel;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;

@end
