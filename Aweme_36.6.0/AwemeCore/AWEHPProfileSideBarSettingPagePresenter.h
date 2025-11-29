@class NSString, AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarSettingPagePresenter : AWELeftSideBarBasePresenter <AWESettingPageBadgeControlDelegate>

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;
@property (nonatomic) BOOL isSideBarOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEHPProfileSideBarDOUYINJXAdapterClass;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (id)p_sideBarListCellDataModel:(id)a0;
- (id)p_jumpUrlString;
- (id)aAWEHPProfileSideBarDOUYINJXAdapter;
- (void)showDotBadgeWithCompletion:(id /* block */)a0;
- (void)hideDotBadgeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
