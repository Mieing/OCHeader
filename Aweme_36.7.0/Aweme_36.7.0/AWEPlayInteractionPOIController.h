@class NSString;

@interface AWEPlayInteractionPOIController : AWEPlayInteractionBaseController <AWEPOIPlayInteractionVCManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadSplitScreenAdapterClass;

- (BOOL)isPadSplitOpening;
- (id)aAWEPadSplitScreenAdapter;
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
- (void)triggerShowForCard:(id)a0 shouldShow:(BOOL)a1;
- (void)viewDidLoad;

@end
