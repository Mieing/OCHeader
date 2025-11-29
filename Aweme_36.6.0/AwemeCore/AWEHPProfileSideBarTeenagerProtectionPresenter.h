@class AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarTeenagerProtectionPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;

+ (Class)aAWEChildModeModuleServiceCommonAdapterClass;
+ (Class)aAWEUserCenterModuleServiceDOUYINHTSAdapterClass;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (id)aAWEChildModeModuleServiceCommonAdapter;
- (id)aAWEUserCenterModuleServiceDOUYINHTSAdapter;
- (id)p_sideBarListCellDataModel:(id)a0;
- (void)updateSideBarSubTitleIfNeed;
- (id)digitalWellbeingStatusString;
- (void).cxx_destruct;

@end
