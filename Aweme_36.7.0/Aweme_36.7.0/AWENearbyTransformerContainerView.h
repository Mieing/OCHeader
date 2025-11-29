@class NSMutableDictionary, NSDictionary, AWENearbyPageContext, AWESharkContainerView, NSString;

@interface AWENearbyTransformerContainerView : UIView <AWESharkContainerLoadDelegate, AWENearbyLynxCardEventHandlerProtocol, AWENearbyTransformerContainerProtocol>

@property (retain, nonatomic) AWESharkContainerView *sharkView;
@property (retain, nonatomic) NSMutableDictionary *recentLifeServiceDiffHeightDictionary;
@property (nonatomic) BOOL needShowLifeEntranceGuide;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWENearbyPageContext *pageContext;
@property (nonatomic) BOOL isLifeEntrancePageEnable;
@property (copy, nonatomic) id /* block */ didCardUpdateFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (id)findViewWithName:(id)a0;
- (id)initWithPageContext:(id)a0;
- (void)handleLynxViewsShow:(id)a0 params:(id)a1;
- (void)handleLynxViewsHidden:(id)a0 params:(id)a1;
- (void)updateGloabalContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)trackShowAnimated:(BOOL)a0 params:(id)a1;
- (void)trackSkylightHidden;
- (id)allLynxViews;
- (id)lynxViewWithCardType:(long long)a0;
- (void)setData:(id)a0 extraParams:(id)a1;
- (id)findViewWithName:(id)a0 targetCardType:(long long)a1;
- (long long)getCardPremierHeightWithCardType:(long long)a0;
- (void)updateCardElementDisplayAttribute:(BOOL)a0 cardType:(long long)a1;
- (void)updateRecentTransformerDiffHeight:(double)a0 cardType:(long long)a1;
- (void)cleanTransformerDiffHeightWithCardType:(long long)a0;
- (void)onContainerStartLoadWithSchema:(id)a0;
- (void)onContainerLoadFinished:(id)a0;
- (void)onCardStartLoadWithCardUrl:(id)a0;
- (void)onCardDidFirstScreen:(id)a0;
- (void)onCardLoadFinished:(id)a0 card:(id)a1;
- (void)onCardUpdatedWithCard:(id)a0;
- (void)onCardSetupLynxInfo:(id)a0 bulletInfo:(id)a1 card:(id)a2;
- (void)onCardUpdateLynxInfo:(id)a0 bulletInfo:(id)a1 card:(id)a2;
- (void)updateLayout;
- (void).cxx_destruct;

@end
