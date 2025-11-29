@class NSMutableDictionary, AWEPOITradeEntryAnchorView, AWEPOIItemAnchorContentModel, AWEAwemeModel, NSString;

@interface AWEPOIFeedEntryAnchorViewManager : AWEPOIBaseEntryAnchorViewManager <AWEUserMessage>

@property (retain, nonatomic) AWEPOITradeEntryAnchorView *entryView;
@property (retain, nonatomic) AWEPOIItemAnchorContentModel *anchorContentData;
@property (nonatomic) BOOL shouldShowDetailWhenAppear;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) BOOL isVCAppear;
@property (retain, nonatomic) NSMutableDictionary *handleEventDict;
@property (nonatomic) long long scene;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL hasNewUserEntrance;
@property (nonatomic) BOOL userNeverVisitPoiAnchor;
@property (nonatomic) BOOL isValidExpanding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (BOOL)shouldShowPOIButtonWithContext:(id)a0;
- (BOOL)shouldShowPOIDetailWithContext:(id)a0;
- (id)initWithScene:(long long)a0 maxWidth:(double)a1;
- (void)handleFavoriteNotification:(id)a0;
- (void)handleDiggNotification:(id)a0;
- (void)handleShareAwemeNotification:(id)a0;
- (void)handleShareToUseClickedNotification:(id)a0;
- (BOOL)isOutsideShareWithShareType:(id)a0;
- (BOOL)p_useNewStyleForFeedIfNeeded;
- (void)handleClickWithContext:(id)a0;
- (void)handleExpandStartWithContext:(id)a0;
- (void)handleSetDataWithContext:(id)a0;
- (void)handleWillShowOnSuperViewWithContext:(id)a0;
- (void)handleExpandAnimatingWithContext:(id)a0;
- (void)handleExpandEndingWithContext:(id)a0;
- (void)handleResetWithContext:(id)a0;
- (void)handleTryingExpandWithContext:(id)a0;
- (void)handleVCWillDisappearWithContext:(id)a0;
- (void)handlePlayerPlayedPeriodChangedWithContext:(id)a0;
- (void)handleVCDidAppearWithContext:(id)a0;
- (void)handleUpdateAnchorViewWithContext:(id)a0;
- (void)handleDidEndDisplayingWithContext:(id)a0;
- (void)handleDidDisappearWithContext:(id)a0;
- (void)handleAppDidEnterBackgroundWithContext:(id)a0;
- (void)addObserverToNotificationCenter;
- (void)handleCloseContactVCNotification:(id)a0;
- (BOOL)shouldHandleEventWithEventType:(unsigned long long)a0;
- (void)tryShowDetail;
- (void)trackPOISlideWithContext:(id)a0;
- (void)addPOIParamsWithContext:(id)a0 toMutableDictionary:(id)a1;
- (void)addVideoPlayerParamsWithContext:(id)a0 toMutableDictionary:(id)a1;
- (void)preloadIronManIfNeededWithContext:(id)a0;
- (id)eventStringWithEventType:(unsigned long long)a0;
- (void)configEntryViewWithContext:(id)a0;
- (BOOL)didHasPoiPagePoiIdWithContext:(id)a0;
- (BOOL)isParentChildPoiWithContext:(id)a0;
- (void)handleTryingExpandNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithScene:(long long)a0;
- (void)dealloc;
- (id)anchorView;

@end
