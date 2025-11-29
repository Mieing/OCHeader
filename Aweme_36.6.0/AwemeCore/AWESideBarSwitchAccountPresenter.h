@class NSString, AWELeftSideBarListCellDataModel, UIView;
@protocol AWELeftSideBarStencilViewProtocol;

@interface AWESideBarSwitchAccountPresenter : AWELeftSideBarBasePresenter <AWEUserSwitchDelegate>

@property (retain, nonatomic) UIView<AWELeftSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWELeftSideBarListCellDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (BOOL)needLoadPresenter;
- (id)p_dataModelWithData:(id)a0;
- (BOOL)showVideoUploadingAlertIfNeeded;
- (void)showDigitalWellbeingLockViewIfNeededWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
