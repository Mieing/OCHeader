@class AWELeftSideBarListCellDataModel, UIView;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWELeftSideBarDraftBoxPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *cellView;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *cellDataModel;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (void)setupDraftBoxSubTitle;
- (void).cxx_destruct;

@end
