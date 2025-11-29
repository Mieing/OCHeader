@class NSString, NSDictionary, AWESettingBaseViewModel;

@interface AWEGeneralSettingViewController : AWESettingBaseViewController <AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (nonatomic) BOOL shouldShowDoubleColumnEntryPopup;
@property (nonatomic) BOOL shouldShowRelatedRecommendEntryPopup;
@property (nonatomic) BOOL shouldShowTabPreviewSettingPopup;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL showSearchColumLayout;
@property (copy, nonatomic) NSDictionary *searchTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)vcTitle;
- (void)updateSettingsCell;
- (long long)p_itemModelTypeWithString:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)viewModel;
- (void)dealloc;

@end
