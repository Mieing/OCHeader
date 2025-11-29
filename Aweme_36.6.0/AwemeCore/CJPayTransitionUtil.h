@interface CJPayTransitionUtil : NSObject

@property (nonatomic) double maskMaxAlpha;
@property (nonatomic) double animationDuration;

+ (id)sharedInstance;

- (id)p_createMaskView;
- (void)transitionExitFullVC:(id)a0 maskContainerView:(id)a1 completion:(id /* block */)a2;
- (void)transitionExitPopUpVC:(id)a0 isShowMaskView:(BOOL)a1 completion:(id /* block */)a2;
- (void)transitionExitHalfVC:(id)a0 maskContainerView:(id)a1 completion:(id /* block */)a2;
- (void)transitionExitHalfVC:(id)a0 toHalfVC:(id)a1 containerView:(id)a2 containerBottomView:(id)a3 completion:(id /* block */)a4;
- (void)transitionTranslationExitHalfVC:(id)a0 toHalfVC:(id)a1 containerView:(id)a2 containerBottomView:(id)a3 completion:(id /* block */)a4;
- (id)addMaskViewForView:(id)a0;
- (void)updateInteractiveFullVC:(id)a0 maskView:(id)a1 percentComplete:(double)a2 completion:(id /* block */)a3;
- (void)finishInteractiveFullVC:(id)a0 isCancel:(BOOL)a1 maskView:(id)a2 completion:(id /* block */)a3;
- (void)transitionEnterPopUpVC:(id)a0 isShowMaskView:(BOOL)a1 completion:(id /* block */)a2;
- (void)transitionExitHalfVC:(id)a0 maskContainerView:(id)a1 maskViewHeight:(double)a2 isRemoveBGImageView:(BOOL)a3 completion:(id /* block */)a4;
- (void)transitionExitPopUpVC:(id)a0 isShowMaskView:(BOOL)a1 isRemoveBGImageView:(BOOL)a2 completion:(id /* block */)a3;
- (void)transitionExitHalfVC:(id)a0 maskContainerView:(id)a1 maskViewHeight:(double)a2 completion:(id /* block */)a3;
- (void)transitionEnterFullVC:(id)a0 maskContainerView:(id)a1 completion:(id /* block */)a2;
- (void)transitionEnterHalfVC:(id)a0 isShowMaskView:(BOOL)a1 completion:(id /* block */)a2;
- (void)transitionEnterHalfVC:(id)a0 isShowMaskView:(BOOL)a1 maskViewHeight:(double)a2 completion:(id /* block */)a3;
- (void)transitionEnterHalfVC:(id)a0 fromHalfVC:(id)a1 containerView:(id)a2 containerBottomView:(id)a3 completion:(id /* block */)a4;
- (void)transitionTranslationEnterHalfVC:(id)a0 fromHalfVC:(id)a1 containerView:(id)a2 containerBottomView:(id)a3 completion:(id /* block */)a4;
- (void)p_transitionHalfView:(id)a0 containerHeight:(double)a1 halfVCEntranceType:(unsigned long long)a2 transitionType:(long long)a3 maskView:(id)a4 completion:(id /* block */)a5;
- (id)p_createSnapshotForView:(id)a0;
- (void)p_transitionWithTransitionType:(long long)a0 action:(id /* block */)a1 completion:(id /* block */)a2;
- (void)transitinNormalView:(id)a0 transitionType:(long long)a1 maskView:(id)a2 completion:(id /* block */)a3;
- (void)p_transitionPopupView:(id)a0 transitionType:(long long)a1 maskView:(id)a2 completion:(id /* block */)a3;
- (id)init;

@end
