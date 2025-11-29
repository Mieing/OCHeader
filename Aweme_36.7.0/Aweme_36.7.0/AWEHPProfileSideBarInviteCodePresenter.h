@class AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarInviteCodePresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;

+ (Class)aAWEUserCenterModuleServiceDOUYINLiteAdaperClass;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (BOOL)needLoadPresenter;
- (id)p_sideBarListCellDataModel:(id)a0;
- (void)finishInviteCodeTask;
- (id)aAWEUserCenterModuleServiceDOUYINLiteAdaper;
- (void).cxx_destruct;
- (void)dealloc;

@end
