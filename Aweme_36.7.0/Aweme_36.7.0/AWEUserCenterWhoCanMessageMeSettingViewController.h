@class NSString, AWEUserCenterWhoCanMessageMeDataController, AWESettingBaseViewModel;

@interface AWEUserCenterWhoCanMessageMeSettingViewController : AWESettingBaseViewController <AWEUserCenterWhoCanMessageMeUpdateDataDelegate, AWERouterViewControllerProtocol> {
    AWESettingBaseViewModel *_viewModel;
}

@property (retain, nonatomic) AWEUserCenterWhoCanMessageMeDataController *dataController;
@property (copy, nonatomic) NSString *defaultOpen;
@property (nonatomic) BOOL directlyExitPageAfterPopupDismiss;
@property (copy, nonatomic) NSString *highlightID;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)highlightCellIfNeeded;
- (void)p_highlightCellIfNeeded;
- (void)highlightCellWithIndex:(id)a0;
- (id)p_highlightIndexPathWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillDisappear:(BOOL)a0;

@end
