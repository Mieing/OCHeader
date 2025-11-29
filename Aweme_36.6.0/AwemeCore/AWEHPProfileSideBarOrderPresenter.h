@class AWESideBarOrderSubtitleDisplayInfo, AWEHPSideBarStencilViewDataModel, UIView;
@protocol AWEHPSideBarStencilViewProtocol;

@interface AWEHPProfileSideBarOrderPresenter : AWELeftSideBarBasePresenter

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;
@property (retain, nonatomic) AWESideBarOrderSubtitleDisplayInfo *subtitleInfo;
@property (nonatomic) BOOL isViewAppear;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (id)bussinessTrackInfo;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarWillOpen;
- (void)leftSideBarViewDidAppear;
- (void)leftSideBarViewDidDisAppear;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (id)p_enterFrom;
- (id)p_sideBarListCellDataModel:(id)a0;
- (void)updateOrderWhenMsgReceived;
- (void)p_updateSubTitle;
- (id)p_replaceQueryForSchema:(id)a0 withParams:(id)a1;
- (void)p_hideSubtitleIfNeeded;
- (void)p_trackSubtitleDidShowIfNeeded;
- (void)p_replenishOrderSubtitleIfNeeded;
- (void)p_fetchOrderCounter;
- (void)p_showSubtitle:(id)a0;
- (void)p_updateContainerViewWithSubtitle:(id)a0;
- (id)p_enterFromWithIdentification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
