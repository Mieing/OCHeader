@class NSString, AWELeftSideBarListCellDataModel, UIView;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWESideBarSettingPagePresenter : AWELeftSideBarBasePresenter <AWESettingPageBadgeControlDelegate, AWELeftSideBarDowngradeDisplayProtocol>

@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *settingPageView;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *dataModel;
@property (nonatomic) BOOL isSideBarOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (double)cellViewWidth;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (BOOL)needUpdateLeftSideBarContextWithModuleType:(id)a0 withExtraData:(id)a1 withAmbienceIdentification:(id)a2;
- (void)updateLeftSideBarContext:(id)a0 withExtraData:(id)a1 withAmbienceIdentification:(id)a2;
- (BOOL)canDowngradeDisplay;
- (void)downgradeDisplay;
- (id)p_jumpUrlString;
- (void)showDotBadgeWithCompletion:(id /* block */)a0;
- (void)hideDotBadgeWithCompletion:(id /* block */)a0;
- (id)p_dataModelWithExtraData:(id)a0;
- (id)p_createSettingPageViewWithModuleType:(id)a0;
- (void)p_didClickSettingPageView;
- (void)p_clearSettingPageView;
- (id)p_previousPage:(id)a0;
- (void).cxx_destruct;

@end
