@class NSMutableArray, RACDisposable, NSString, NSNumber, IESLiveInteractiveVirtualAvatarStore;
@protocol IESLiveEffectProcessService, IESLiveInteractVideoCaptureRouter, IESLiveMultiKTVSingModeSwitch, IESLiveMultiKTVRouter, IESLivePerfSampler;

@interface IESLiveInteractiveVirtualAvatarFragment : IESLiveRoomComponent <IESLiveInteractiveVirtualAvatarRouter, IESLiveEffectMessageSubscriber, IESLiveInteractiveAvatarPreviewActions, IESLiveInteractionLinkerServiceAction>

@property (retain, nonatomic) IESLiveInteractiveVirtualAvatarStore *store;
@property (weak, nonatomic) id<IESLiveEffectProcessService> effectProcessing;
@property (weak, nonatomic) id<IESLiveInteractVideoCaptureRouter> captureRouter;
@property (weak, nonatomic) id<IESLiveMultiKTVRouter> multiKTVRouter;
@property (weak, nonatomic) id<IESLiveMultiKTVSingModeSwitch> singModeSwitch;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) BOOL avatarModelLoading;
@property (nonatomic) BOOL canSkipMessage;
@property (nonatomic) BOOL isUseAvatarModelBefore;
@property (retain, nonatomic) NSNumber *avatarModeAppliedTime;
@property (retain, nonatomic) NSMutableArray *applyAvatarModelCompletionArr;
@property (retain, nonatomic) RACDisposable *disposable;
@property (nonatomic) BOOL needResetCameraPosition;
@property (nonatomic) BOOL usedAvatarOnceLink;
@property (nonatomic) int currentUserLinkTypeWillChangeTo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (int)currentUserLinkType;
- (void)didReceiveEffectMessage:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (void)commonCastScreenDidStart;
- (void)commonCastScreenDidEnd;
- (void)didUpdateServerLinkTypeSucceed:(int)a0 actively:(BOOL)a1;
- (void)didUpdateServerLinkTypeFailed:(int)a0 actively:(BOOL)a1;
- (void)endLink;
- (void)interactionLinkerServiceInteractDidEnd:(id)a0 error:(id)a1;
- (void)interactionLinkerService:(id)a0 interactWillHandleError:(id)a1;
- (BOOL)needApplyAvatarEffect;
- (void)applyAvatarEffectModel:(id /* block */)a0;
- (void)removeAvatarEffectModel:(id /* block */)a0;
- (void)changeAvatarBackgroundIfNeeded;
- (void)applyCustomAvatarAppearanceIfNeeded:(BOOL)a0;
- (void)triggerAvatarAction:(id)a0;
- (int)lastUsedLinkType;
- (void)markCurrentAvatarModelPathDeactivated;
- (void)updateUserLinkType:(int)a0;
- (void)updateUserLinkTypeByForce:(int)a0;
- (void)autoStartAvatarMode;
- (BOOL)canSkipReload;
- (BOOL)isInEqualBigParty;
- (void)didAvatarAuditStatusChanged:(long long)a0;
- (void)p_applyCustomAvatarAppearanceIfNeeded:(BOOL)a0;
- (void)changeAvatarCameraPositionIfNeeded;
- (void)applyCompletion:(id /* block */)a0;
- (double)avatarBackgroundLoadEstimateTime;
- (void)applyAvatarCustomMode;
- (void)p_changeAvatarBackgroundIfNeeded;
- (id)equalBigPartyAvatarBgIdentifer;
- (id)bigPartyAnchorAvatarBgIdentifier;
- (id)avatarBgImageWithIdentifier:(id)a0;
- (void)p_preloadBigPartyAvatarBackgroundImageWithID:(id)a0 completion:(id /* block */)a1;
- (double)changeInputEstimateTime;
- (BOOL)p_shouldActivePauseLive;
- (void)p_trigglePasueLive;
- (void).cxx_destruct;
- (unsigned long long)currentScene;
- (void)applyCompletion;

@end
