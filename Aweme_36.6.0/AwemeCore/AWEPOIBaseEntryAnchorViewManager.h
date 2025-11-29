@class NSString, AWEPOIEntryAnchorUtil;
@protocol AWEPOIEntryAnchorUtilProtocol, AWEPOIPlayInteractionVCManagerProtocol, AWEPOIEntryAnchorViewManagerDelegate, AWEPOIAnchorBubbleManagerProtocol;

@interface AWEPOIBaseEntryAnchorViewManager : NSObject <AWEPOIEntryAnchorViewManagerProtocol, AWEPOIEntryAnchorViewManagerOverrideProtocol>

@property (retain, nonatomic) AWEPOIEntryAnchorUtil *anchorUtil;
@property (weak, nonatomic) id<AWEPOIPlayInteractionVCManagerProtocol> delegate;
@property (weak, nonatomic) id<AWEPOIEntryAnchorViewManagerDelegate> anchorDelegate;
@property (weak, nonatomic) id<AWEPOIAnchorBubbleManagerProtocol> bubbleDelegate;
@property (retain, nonatomic) id<AWEPOIEntryAnchorUtilProtocol> poiAnchorUtil;
@property (nonatomic) BOOL useNewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAnchorEvent:(long long)a0 withContext:(id)a1;
- (BOOL)shouldShowPOIButtonWithContext:(id)a0;
- (BOOL)shouldShowPOIDetailWithContext:(id)a0;
- (void)updateUIWithModel:(id)a0;
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
- (void).cxx_destruct;
- (id)anchorView;

@end
