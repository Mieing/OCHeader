@class NSDictionary, AWELeftSideBarTimeManager, UIView;
@protocol AWELeftSideBarTopTitleStencilViewProtocol;

@interface AWELeftSideBarTopTitlePresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWELeftSideBarTopTitleStencilViewProtocol> *titleView;
@property (retain, nonatomic) AWELeftSideBarTimeManager *timeManager;
@property (retain, nonatomic) NSDictionary *extraData;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (id)getShowTitle:(id)a0;
- (void).cxx_destruct;

@end
