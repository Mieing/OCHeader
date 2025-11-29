@class AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarEnterprisePresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;
@property (nonatomic) BOOL hasTrackShowEvent;

+ (Class)aAWESettingsViewModelDOUYINHMAdapterClass;
+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (void)leftSideBarViewDidDisAppear;
- (BOOL)needLoadPresenter;
- (id)aAWESettingsViewModelDOUYINHMAdapter;
- (id)aAWEUserCenterModuleServiceCommonAdapter;
- (id)p_sideBarListCellDataModel:(id)a0;
- (void)preRenderServicePage;
- (void)releasePreRenderedResource;
- (id)serviceCenterURL;
- (BOOL)shouldPreRenderServiceCenter;
- (void)handleCustomClickedEvent;
- (void).cxx_destruct;

@end
