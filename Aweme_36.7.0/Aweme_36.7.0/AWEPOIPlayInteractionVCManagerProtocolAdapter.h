@class NSString;
@protocol AWEPOIPlayInteractionVCManagerProtocol, IESLLNearbyBigCardListCellShrinkProtocol;

@interface AWEPOIPlayInteractionVCManagerProtocolAdapter : NSObject <IESLLPOIPlayInteractionVCManagerProtocol>

@property (weak, nonatomic) id<AWEPOIPlayInteractionVCManagerProtocol> interactionManager;
@property (retain, nonatomic) id<IESLLNearbyBigCardListCellShrinkProtocol> nearbyBigCardShrinkController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPadSplitOpening;
- (void)tryHidePauseIcon;
- (void)tryShowPauseIcon;
- (void)handleAnchorDetailPageEnterEventWithIdentifier:(id)a0;
- (void)handleAnchorDetailPageDismissEventWithIdentifier:(id)a0;
- (id)getCurrentVideoPlayer;
- (id)getRichContentContainer;
- (void)hideInteractionControllerWithAnimation:(BOOL)a0;
- (void)resumeInteractionControllerWithAnimation:(BOOL)a0;
- (void)switchPlayStateWithAnimation:(BOOL)a0;
- (void)playWithAnimation:(BOOL)a0;
- (void)pauseWithAnimation:(BOOL)a0;
- (void)changeVideoShrinkStatus:(BOOL)a0;
- (id)albumShrinkController;
- (id)initWithInteractionManager:(id)a0;
- (void).cxx_destruct;

@end
