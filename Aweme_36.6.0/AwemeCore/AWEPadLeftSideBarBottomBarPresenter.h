@class AWELeftSideBarListCellDataModel, UIView;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWEPadLeftSideBarBottomBarPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (nonatomic) long long themeStyle;
@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *listView;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (id)leftSideBarListCellDataModel:(id)a0;
- (void).cxx_destruct;

@end
