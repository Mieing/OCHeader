@class NSString, AWESettingBaseViewModel;

@interface AWEVideoPlaySettingViewController : AWESettingBaseViewController <AWEVideoPlaySettingDelegate, AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (nonatomic) long long sectionWillBeReloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (long long)p_itemModelTypeWithString:(id)a0;
- (id)initWithHighlightID:(id)a0;
- (id)getLiveModuleService;
- (void)reloadSection:(long long)a0 rowAnimation:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (id)viewModel;

@end
