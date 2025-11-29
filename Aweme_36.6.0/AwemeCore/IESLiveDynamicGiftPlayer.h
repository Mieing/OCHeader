@class NSString, NSMutableDictionary;
@protocol IESLiveGiftPlayerDelegate, IESLiveRevenueInteractModule, IESLiveInteractService, IESLiveDynamicGiftActions;

@interface IESLiveDynamicGiftPlayer : IESLiveLynxAssetAndDynamicBasePlayer <IESLiveRevenueInteractAction, IESLiveInteractAction>

@property (nonatomic) BOOL anchorRenderFilterEnable;
@property (nonatomic) BOOL fixSceneEnable;
@property (retain, nonatomic) NSMutableDictionary *loadedEffectResource;
@property (retain, nonatomic) id<IESLiveRevenueInteractModule> revenueInteractModule;
@property (weak, nonatomic) id<IESLiveInteractService> interactService;
@property (nonatomic) unsigned long long openScene;
@property (nonatomic) long long roomScene;
@property (weak, nonatomic) id<IESLiveGiftPlayerDelegate> giftPlayerDelegate;
@property (weak, nonatomic) id<IESLiveDynamicGiftActions> dynamicGiftActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)didAnchorViewFramesChanged;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)endInteractiveWithScene:(unsigned long long)a0;
- (BOOL)isPlayingAsset;
- (void)showDynamicGiftWebViewWith:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (void)noticeLynxViewInteractChange:(long long)a0;
- (void)noticeLynxViewCommonInteractChange:(long long)a0 type:(id)a1;
- (void)triggerNextAnimation:(BOOL)a0 error:(id)a1;
- (void)removeLoadedEffectResourceIfNeeded:(id /* block */)a0;
- (void)recordLoadedEffectResource:(id)a0;
- (void)showDynamicGiftAnimationWithModel:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (void)didFinishPlayingDynamicGiftWithError:(id)a0;
- (void).cxx_destruct;

@end
