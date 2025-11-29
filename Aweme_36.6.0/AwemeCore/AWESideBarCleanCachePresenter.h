@class AWELeftSideBarListCellDataModel, UIView;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWESideBarCleanCachePresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *dataModel;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (id)p_dataModelWithData:(id)a0;
- (void).cxx_destruct;

@end
