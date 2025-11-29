@class AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarGuaranteePresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;
@property (nonatomic) BOOL hasTrackShowEvent;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)leftSideBarViewDidDisAppear;
- (BOOL)needLoadPresenter;
- (void)leftSideBarPresenterOnCreate;
- (id)p_sideBarListCellDataModel:(id)a0;
- (void)p_trackShowEventIfNeed;
- (void).cxx_destruct;

@end
