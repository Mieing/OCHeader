@interface IESLivePetRabbitSwiftFragment : IESLiveRoomComponent <IESLiveRevenueInteractAction, IESLiveAioLinkLivePetService, IESLivePublicScreenLayoutSubscriber, IESHYControllerDelegate, IESLivePetRabbitReaction, HTSLiveSendGiftActions, IESLivePetRabbitRouter> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layout;
    void /* unknown type, empty encoding */ animationLynxContainer;
    void /* unknown type, empty encoding */ isAnimationLynxContainerShowing;
    void /* unknown type, empty encoding */ isLandscape;
    void /* unknown type, empty encoding */ rabbitTraceVC;
    void /* unknown type, empty encoding */ petEffectInfoSubject;
    void /* unknown type, empty encoding */ petRegionSubject;
    void /* unknown type, empty encoding */ linkRegionSubject;
    void /* unknown type, empty encoding */ giftTrayEventSubject;
    void /* unknown type, empty encoding */ giftEffectEventSubject;
    void /* unknown type, empty encoding */ giftEffectGiftList;
    void /* unknown type, empty encoding */ giftTrayGiftList;
    void /* unknown type, empty encoding */ cachedLinkRegion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_giftTrayEventCaches;
    void /* unknown type, empty encoding */ currentPetType;
    void /* unknown type, empty encoding */ petConfig;
    void /* unknown type, empty encoding */ giftConfig;
}

+ (BOOL)componentShouldActive:(id)a0;

- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)didAnchorViewFramesChanged;
- (id)linkRegionToString:(id)a0;
- (id)observePetEffectInfo;
- (id)observePetRegion;
- (id)observeLinkRegion;
- (id)observeGiftTrayEvent:(id)a0;
- (id)observeGiftEffectEvent:(id)a0;
- (void)unloadPet;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)iesHYControllerWillDismiss:(id)a0;
- (void)iesHYControllerDidDismiss:(id)a0;
- (void)handleOrientationChanged:(long long)a0;
- (void)showContainerIfNeedWithPetType:(long long)a0;
- (void)updatePetRegion;
- (void)didGiveGiftWithResponse:(id)a0;
- (BOOL)isLivePetGiftWithGiftId:(id)a0;
- (BOOL)shouldShowGiftTrayAnimationWithGiftId:(id)a0;
- (void)showPetRabbitTraceViewWithGiftId:(id)a0;
- (void)startPetRabbitGiftTrayAnimationWithGiftId:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)startAvoidGiftAnimationWithGiftId:(id)a0;
- (void)stopAvoidGiftAnimationWithGiftId:(id)a0;
- (void)onPetStatusChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
