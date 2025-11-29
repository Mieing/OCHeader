@class AWECoverPicTemplatePanelLoadingView, AWEVideoPublishViewModel, NSString, AWECoverPicTemplatePanelCategoryView, UIView, AWECoverPicTemplatePanelContentView;
@protocol AWECoverEditPicTemplateServiceProtocol, IESServiceProvider, ACCDUXLoadingInstance, ACCPicTemplateTrackServiceProtocol, AWECoverPicTemplatePanelContainerViewDelegate, ACCPicTemplatePanelDataProtocol;

@interface AWECoverPicTemplatePanelContainerView : UIView <AWECoverPicTemplatePanelCategoryViewDelegate, AWECoverPicTemplatePanelContentViewDelegate>

@property (retain, nonatomic) AWECoverPicTemplatePanelCategoryView *categoryView;
@property (retain, nonatomic) AWECoverPicTemplatePanelContentView *templateContentView;
@property (retain, nonatomic) AWECoverPicTemplatePanelLoadingView *loadingView;
@property (retain, nonatomic) UIView<ACCDUXLoadingInstance> *progressLoadingView;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<AWECoverEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<ACCPicTemplatePanelDataProtocol> dataManagerService;
@property (weak, nonatomic) id<ACCPicTemplateTrackServiceProtocol> trackerService;
@property (copy, nonatomic) NSString *currentEnterType;
@property (nonatomic) double startLoadCategoryTime;
@property (weak, nonatomic) id<AWECoverPicTemplatePanelContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoadingView;
- (void)didRemoveTemplate;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)categoryViewDidSelectedCategoryAtIndexPath:(id)a0;
- (void)landingToInitialTemplate;
- (BOOL)panelIsOnTop;
- (void)unselectedCell;
- (void)updateDidSelectedCell;
- (void)scrollToTopForSectionAtIndex:(long long)a0;
- (BOOL)loadingShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 serviceProvider:(id)a1 repository:(id)a2;
- (void)preloadFirstTabCoverTemplateIfNeeded;
- (void)checkVideoConfirmDismiss:(id /* block */)a0;
- (void)picTemplateContentView:(id)a0 atIndexPath:(id)a1;
- (void)picTemplateContentView:(id)a0 didSelectedTemplate:(id)a1 atIndexPath:(id)a2;
- (void)picTemplateContentView:(id)a0 willDisplayTemplate:(id)a1 atIndexPath:(id)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (void)fetchData;
- (void)setupUI;
- (void)showLoadingView;

@end
