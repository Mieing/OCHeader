@class NSString, AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarHelpDeskPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;
@property (nonatomic) BOOL hasRequest;
@property (nonatomic) double lastRequestTime;
@property (copy, nonatomic) NSString *requestSchema;

+ (Class)aAWEProfileSettingSliderViewModelDOUYINHMAdapterClass;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarOpen;
- (BOOL)needLoadPresenter;
- (id)jumpUrl;
- (id)p_sideBarListCellDataModel:(id)a0;
- (id)aAWEProfileSettingSliderViewModelDOUYINHMAdapter;
- (id)addSourceToSchema:(id)a0;
- (void).cxx_destruct;

@end
