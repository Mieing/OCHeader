@class AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarSelfHelpAdPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;
@property (nonatomic) BOOL hasTrackShow;
@property (nonatomic) BOOL hasOnCreateCellView;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (BOOL)needLoadPresenter;
- (void)trackShow;
- (id)p_sideBarListCellDataModel:(id)a0;
- (void).cxx_destruct;

@end
