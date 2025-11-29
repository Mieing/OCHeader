@class NSString, WCCanvasComponentRandomPickCardInfo, WCAdRandomPickCardItemsView;

@interface WCCanvasRandomPickCardComponent : WCCanvasComponent <WCAdRandomPickCardItemsViewDelegate>

@property (retain, nonatomic) WCCanvasComponentRandomPickCardInfo *cardsInfo;
@property (retain, nonatomic) WCAdRandomPickCardItemsView *cardItemsView;
@property (nonatomic) BOOL didShowImpressiveAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)layoutSubviews;
- (void)componentWillResumeState:(BOOL)a0;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)randomPickResetRandomPickCardStatus;
- (void)randomPickShowImpressiveAnimation;
- (void)randomPickSetCardViewsForTransitionBeginning:(BOOL)a0 isToVC:(BOOL)a1;
- (void)tryToShowImpressiveAnimation;
- (void)makeCardItemsViewPrepare;
- (void)showCardItemsViewWithAnimation;
- (id)randomPickCardLogic;
- (id)onRandomPickCardItemsFetchCanvasPageId;
- (id)onRandomPickCardItemsFetchPickCardLogic;
- (void)onRandomPickCardItemsItemViewDidClick:(id)a0 index:(unsigned long long)a1;
- (BOOL)onRandomPickCardItemsIsCardSelectedWithCardId:(id)a0;
- (BOOL)onRandomPickCardItemsIsCardSelectedPreviouslyWithCardId:(id)a0;
- (BOOL)onRandomPickCardItemsIsReadyToPlayQuickSwitchAnimation;
- (void)onRandomPickCardItemsQuickSwitchAnimationIsDone;
- (void)onRandomPickCardItemsVanishingItemViewReadyToFillUp;
- (void)onRandomPickCardItemsUpdateVanishingItemInfoWith:(id)a0;
- (void)onRandomPickCardItemsUpdateStayPutItemWithInfo:(id)a0;
- (id)onRandomPickCardItemsFetchVanishingItemInfo;
- (id)onRandomPickCardItemsFetchLastStayPutItemInfo;
- (long long)onRandomPickCardItemsFetchPreviousClickedIndex;
- (void).cxx_destruct;

@end
