@class NSString, NSDictionary, AWEHPSideBarStencilViewDataModel, NSDate, UIView;
@protocol AWEProfileExtensionAreaTheaterCardInfoManagerProtocol, AWEHPSideBarStencilViewProtocol, AWEHPSideBarItemEntranceGuideAbility;

@interface AWEHPProfileSideBarCinemaPresenter : AWELeftSideBarBasePresenter <AWEHPSideBarItemEntranceGuideAbilityProtocol>

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *dataModel;
@property (retain, nonatomic) id<AWEHPSideBarItemEntranceGuideAbility> entranceGuideAbility;
@property (nonatomic) BOOL showingDot;
@property (nonatomic) BOOL fetchCardDataSuccess;
@property (retain, nonatomic) NSDate *lastDate;
@property (retain, nonatomic) NSDictionary *cardData;
@property (retain, nonatomic) id<AWEProfileExtensionAreaTheaterCardInfoManagerProtocol> aweProfileCardInfoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarWillOpen;
- (BOOL)needLoadPresenter;
- (id)p_sideBarListCellDataModel:(id)a0;
- (void)trackLVideoEntranceShow:(BOOL)a0;
- (void)updateDotShowInfoIfNeed;
- (void)fetchTheaterGuideInfo;
- (void)showBadgeWithVersion:(id)a0;
- (void)setItemEntranceGuideAbility:(id)a0;
- (void).cxx_destruct;
- (void)shouldShowBadge;

@end
