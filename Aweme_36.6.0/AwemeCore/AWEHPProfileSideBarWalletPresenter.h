@class AWESideBarWalletSubtitleDisplayInfo, AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarWalletPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;
@property (retain, nonatomic) AWESideBarWalletSubtitleDisplayInfo *subtitleInfo;
@property (nonatomic) BOOL useNewSubtitleLink;
@property (nonatomic) BOOL isViewAppear;

+ (Class)aAWEProfileSettingSliderViewModelDOUYINHMAdapterClass;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)leftSideBarViewDidAppear;
- (void)leftSideBarViewDidDisAppear;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (id)p_enterFrom;
- (id)p_sideBarListCellDataModel:(id)a0;
- (id)aAWEProfileSettingSliderViewModelDOUYINHMAdapter;
- (void)p_hideSubtitleIfNeeded;
- (void)p_trackSubtitleDidShowIfNeeded;
- (void)p_updateContainerViewWithSubtitle:(id)a0;
- (id)p_enterFromWithIdentification:(id)a0;
- (void)p_fetchWalletNewSubtitleForSideBar;
- (void)p_fetchWalletNewestSubtitle;
- (void)p_showSubtitle:(id)a0 subtitleType:(id)a1 subtitleExtra:(id)a2;
- (void)p_didReceiveSubtitleServeInfoForSideBar:(id)a0;
- (void)p_trackWalletShowWithSubtitle:(id)a0 subtitleType:(id)a1;
- (void).cxx_destruct;

@end
