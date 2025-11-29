@class NSString, AWEPOITradeEntryAnchorView, AWEAwemeModel, NSDictionary, AWEAnchorIntentionalBehavior, AWEPOIEntryAnchorViewContext;
@protocol AWELocalLifeAnchorActionDelegate;

@interface AWEPOITradeFeedEntryAnchorViewManager : AWEPOIBaseEntryAnchorViewManager <AWEAnchorIntentionalBehaviorDelegate, AWEPOITradeEntryAnchorViewManagerProtocol>

@property (retain, nonatomic) AWEPOITradeEntryAnchorView *entryView;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEPOIEntryAnchorViewContext *context;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isVCAppear;
@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEAnchorIntentionalBehavior *intentionalManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELocalLifeAnchorActionDelegate> anchorDelegate;

- (void)trackAdEventWithLabelName:(id)a0;
- (void)trackAdPoiPointShow;
- (BOOL)shouldShowTradeDetailWithContext:(id)a0;
- (id)initWithScene:(long long)a0 maxWidth:(double)a1;
- (void)showAnchorDetailByIntentional;
- (void)trackTradeAdEventWithLabelName:(id)a0;
- (void)p_tryShowSecondaryInfo;
- (void)handleClickWithContext:(id)a0;
- (void)handleExpandStartWithContext:(id)a0;
- (void)handleSetDataWithContext:(id)a0;
- (void)handleWillShowOnSuperViewWithContext:(id)a0;
- (void)handleExpandAnimatingWithContext:(id)a0;
- (void)handleExpandEndingWithContext:(id)a0;
- (void)handleResetWithContext:(id)a0;
- (void)handleVCWillDisappearWithContext:(id)a0;
- (void)handlePlayerPlayedPeriodChangedWithContext:(id)a0;
- (void)handleVCDidAppearWithContext:(id)a0;
- (void)handleDidEndDisplayingWithContext:(id)a0;
- (void)handleDidDisappearWithContext:(id)a0;
- (void)handleAppDidEnterBackgroundWithContext:(id)a0;
- (void)p_innerTradePreload;
- (void)p_addSearchParamsToMutableDictionary:(id)a0;
- (void).cxx_destruct;
- (id)anchorView;

@end
