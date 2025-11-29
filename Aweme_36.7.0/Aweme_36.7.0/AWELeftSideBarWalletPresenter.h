@class AWELeftSideBarListCellDataModel, UIView;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWELeftSideBarWalletPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;
@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *listView;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)leftSideBarViewWillAppear;
- (id)p_enterFrom;
- (id)p_enterFromWithIdentification:(id)a0;
- (void).cxx_destruct;

@end
