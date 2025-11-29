@class IESLiveCombineSubject, NSArray, IESLivePetRabbitLayout, IESLiveAioLinkLinkRegion, NSString, IESLivePetRabbitTracker, IESLivePetRabbitStore, NSMutableArray, IESLivePetRabbitAnimationLynxContainer, UIViewController, NSDictionary;
@protocol IESLiveSubscription, IESLiveURLSchemaHandler, IESHYControllerProtocol;

@interface IESLivePetRabbitFragment : IESLiveRoomComponent <IESLivePetRabbitRouter, IESLiveAioLinkLivePetService, IESLivePublicScreenLayoutSubscriber, IESLivePetRabbitReaction, IESLiveRevenueInteractAction, IESHYControllerDelegate, HTSLiveSendGiftActions>

@property (retain, nonatomic) IESLivePetRabbitStore *store;
@property (retain, nonatomic) IESLivePetRabbitTracker *tracker;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) IESLivePetRabbitLayout *layout;
@property (retain, nonatomic) IESLivePetRabbitAnimationLynxContainer *animationLynxContainer;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (nonatomic) BOOL isAnimationLynxContainerShowing;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) UIViewController<IESHYControllerProtocol> *rabbitTraceVC;
@property (retain, nonatomic) IESLiveCombineSubject *petEffectInfoSubject;
@property (retain, nonatomic) IESLiveCombineSubject *petRegionSubject;
@property (retain, nonatomic) IESLiveCombineSubject *linkRegionSubject;
@property (retain, nonatomic) IESLiveCombineSubject *giftTrayEventSubject;
@property (retain, nonatomic) IESLiveCombineSubject *giftEffectEventSubject;
@property (copy, nonatomic) NSArray *giftEffectGiftList;
@property (copy, nonatomic) NSArray *giftTrayGiftList;
@property (retain, nonatomic) IESLiveAioLinkLinkRegion *cachedLinkRegion;
@property (retain, nonatomic) NSMutableArray *giftTrayEventCaches;
@property (nonatomic) long long currentPetType;
@property (retain, nonatomic) NSDictionary *petConfig;
@property (retain, nonatomic) NSDictionary *giftConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)didAnchorViewFramesChanged;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)iesHYControllerWillDismiss:(id)a0;
- (void)iesHYControllerDidDismiss:(id)a0;
- (void)removeContainer;
- (void)handleOrientationChanged:(long long)a0;
- (void)didGiveGiftWithResponse:(id)a0;
- (BOOL)isLivePetGiftWithGiftId:(id)a0;
- (void)showPetRabbitTraceViewWithGiftId:(id)a0;
- (void)startAvoidGiftAnimationWithGiftId:(id)a0;
- (void)stopAvoidGiftAnimationWithGiftId:(id)a0;
- (void)startPetRabbitGiftTrayAnimationWithGiftId:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)shouldShowGiftTrayAnimationWithGiftId:(id)a0;
- (id)observePetEffectInfo;
- (id)observePetRegion;
- (id)observeLinkRegion;
- (id)observeGiftTrayEvent:(id)a0;
- (id)observeGiftEffectEvent:(id)a0;
- (void)unloadPet;
- (void)updatePetRegion;
- (id)linkRegionToString:(id)a0;
- (void)showContainerIfNeedWithPetType:(long long)a0;
- (void)onPetStatusChanged:(id)a0;
- (void).cxx_destruct;

@end
