@class IESECLiveGoodsListHeaderService, NSString, IESECLiveGoodsListToastService, UIView, IESECLiveGoodsListHeader;

@interface IESECLiveGoodsListHeaderComponent : IESECLiveGoodsListBaseComponent <IESECLiveGoodsListHeaderDelegate, IESECLiveGoodsListHeaderDataSource, IESECLiveGoodsListHeaderComponentDelegate>

@property (retain, nonatomic) IESECLiveGoodsListHeader *headerContainer;
@property (weak, nonatomic) IESECLiveGoodsListToastService *toastService;
@property (weak, nonatomic) IESECLiveGoodsListHeaderService *headerService;
@property (retain, nonatomic) UIView *blankSpaceViewBelowHeader;
@property (retain, nonatomic) UIView *wrapContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBind;
- (id)basicTrackParams;
- (BOOL)isInstantStore;
- (id)p_listEnvironment;
- (void)clickListHeaderWithAction:(id)a0;
- (struct CGPoint { double x0; double x1; })getCartButtonCenterPoint;
- (id)p_listPanelEnvironment;
- (void)updateListDesign;
- (id)headerPromotionView;
- (void)listHeader:(id)a0 clickAction:(id)a1;
- (void)listHeader:(id)a0 clickWithExtraInfo:(id)a1 businessType:(long long)a2 btmModel:(id)a3;
- (BOOL)listHeaderIsInstantStore;
- (id)listHeaderBasicParams:(id)a0;
- (void)trackModuleClickForAction:(id)a0;
- (void)updateSearchBarInfo;
- (id)listHeaderTrackDictionary:(id)a0;
- (BOOL)listHeader:(id)a0 tabListViewContainIntroducingGoods:(id)a1;
- (void)didUpdateSearchBarInfo:(id)a0;
- (void)updateIsLandscape:(BOOL)a0;
- (void)updateShopCartButtonWithExistBottomCart:(BOOL)a0 extraInfo:(id)a1;
- (BOOL)hasVisibleHeaderPromotionView;
- (id)p_couponRouter;
- (void).cxx_destruct;
- (id)view;
- (unsigned long long)corners;
- (void)updateUI:(BOOL)a0;

@end
