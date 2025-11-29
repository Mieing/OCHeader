@class AWEDetailManager, AWEModalTransitionDelegate;

@interface AWEPlayInteractionAnchorViewModel : AWEPlayInteractionBaseViewModel

@property BOOL showGoodsPanel;
@property (retain, nonatomic) AWEModalTransitionDelegate *transitioningDelegate;
@property (retain, nonatomic) AWEDetailManager *detailManager;

+ (Class)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocolClass;
+ (Class)aAWEPlayInteractionAnchorViewModelDOUYINLiteAdapterClass;

- (void)onLinkAdButtonClicked:(id)a0;
- (void)onDouLinkButtonClicked:(id)a0;
- (void)onGameButtonTapped:(id)a0;
- (void)onIronManButtonTapped:(id)a0;
- (void)onMediumButtonTapped:(id)a0;
- (void)onMvLabelClicked:(id)a0;
- (void)onOneKeyLabelClicked:(id)a0;
- (void)onMusicBeatTemplateLabelClicked:(id)a0;
- (void)onGeneralLabelClicked:(id)a0;
- (void)onOpenPlatformLabelClicked:(id)a0;
- (void)onPoiLabelClicked:(id)a0;
- (void)onLocalLifeLabelClicked:(id)a0;
- (void)onShoppingCartIconClicked:(id)a0;
- (void)onStarAtlasLinkButtonClicked:(id)a0;
- (void)onStickerLabelClicked:(id)a0;
- (void)onTaskLinkButtonClicked:(id)a0;
- (void)onGreenScreenLabelClicked:(id)a0;
- (void)onCarAnchorClicked:(id)a0;
- (void)onNormalAppAnchorClicked:(id)a0;
- (void)onSoloKTVLabelClicked:(id)a0;
- (id)aAWEFeedFlameAnchorDOUYINHTSAdapterProtocol;
- (id)poiAnchorManager;
- (void)interactor_onPoiLabelClicked:(id)a0 context:(id)a1;
- (void)interactor_onMvLabelClicked:(id)a0;
- (void)interactor_onOneKeyLabelClicked:(id)a0;
- (void)interactor_onMusicBeatTemplateLabelClicked:(id)a0;
- (void)interactor_onStickerLabelClicked:(id)a0;
- (void)router_onPoiLabelClicked:(id)a0 enterMethod:(id)a1;
- (void)router_onMvLabelClicked:(id)a0;
- (void)router_onMusicBeatTemplateLabelClicked:(id)a0;
- (void)router_onStickerLabelClicked:(id)a0;
- (void)routerStickerShoot;
- (void)routerStickerDetail;
- (void)handleStickerShootError:(id)a0;
- (void)routerMVDetail;
- (void)routerMVShoot;
- (id)mvTypeStrWithType:(unsigned long long)a0;
- (void)didRecvPOIVideoAction:(id)a0;
- (void)interactor_onDouLinkButtonClicked:(id)a0;
- (void)router_onDouLinkButtonClicked:(id)a0;
- (void)interactor_onGameButtonTapped:(id)a0;
- (void)router_onGameButtonTapped:(id)a0;
- (id)appendEnterFromToOpenURL:(id)a0;
- (void)setIronManFeedXscreenConfigIfNeed:(id)a0 context:(id)a1;
- (id)addXScreenABForSchema:(id)a0 group:(int)a1;
- (void)router_onMediumButtonTapped:(id)a0;
- (void)showFirstGuideIfNeeded;
- (void)router_onOneKeyLabelClicked:(id)a0;
- (void)routerAIRemindDetail;
- (void)p_router_onMusicBeatTemplateLabelClicked:(id)a0;
- (void)onOpenPlatformLabelClicked_IMP:(id)a0;
- (void)interactor_onOpenPlatformAnchorClicked:(id)a0;
- (void)router_onOpenPlatformLabelClicked:(id)a0;
- (void)onPoiLabelClicked_IMP:(id)a0;
- (void)onLocalLifeClicked_IMP:(id)a0;
- (id)localLifeAnchorManager;
- (void)_onShoppingCartIconClicked_IMP:(id)a0;
- (id)aAWEPlayInteractionAnchorViewModelDOUYINLiteAdapter;
- (void)interactor_onSoloKTVLabelClicked:(id)a0;
- (void)router_onSoloKTVLabelClicked:(id)a0;
- (void)enterSoloKTVDetailView;
- (void)router_onGreenScreenLabelClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)interactionController;

@end
