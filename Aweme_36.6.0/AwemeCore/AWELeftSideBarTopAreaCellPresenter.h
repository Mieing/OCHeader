@class NSString, AWELeftSideBarListCellDataModel, UIView, AWELeftSideBarListCellDynamicDataModel;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWELeftSideBarTopAreaCellPresenter : AWELeftSideBarBasePresenter <AWELeftSideBarDowngradeDisplayProtocol>

@property (retain, nonatomic) AWELeftSideBarListCellDynamicDataModel *leftSideBarDynamicDataModel;
@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *listView;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
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
- (BOOL)needUpdateLeftSideBarContextWithModuleType:(id)a0 withExtraData:(id)a1 withAmbienceIdentification:(id)a2;
- (void)updateLeftSideBarContext:(id)a0 withExtraData:(id)a1 withAmbienceIdentification:(id)a2;
- (BOOL)canDowngradeDisplay;
- (void)downgradeDisplay;
- (id)p_leftSideBarCellDataModel:(id)a0;
- (void)p_resetListView;
- (void)override_leftSideBarClickCell;
- (void).cxx_destruct;

@end
