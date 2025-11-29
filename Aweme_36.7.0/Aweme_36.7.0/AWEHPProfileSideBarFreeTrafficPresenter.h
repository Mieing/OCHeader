@class AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarFreeTrafficPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;

+ (Class)aAWELeftSideBarCommonAdapterClass;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (id)p_sideBarListCellDataModel:(id)a0;
- (id)aAWELeftSideBarCommonAdapter;
- (void).cxx_destruct;

@end
