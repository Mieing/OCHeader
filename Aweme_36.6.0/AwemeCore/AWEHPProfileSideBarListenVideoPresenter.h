@class AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarListenVideoPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (BOOL)needLoadPresenter;
- (id)p_sideBarListCellDataModel:(id)a0;
- (void).cxx_destruct;

@end
