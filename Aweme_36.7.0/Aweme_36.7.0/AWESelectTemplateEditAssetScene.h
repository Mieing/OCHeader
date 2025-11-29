@class ACCNLEWorksCropEditManager, AWESelectTemplatePlayerViewModel, UIView, AWEModalTransitionDelegate, AWESelectTemplateViewModel;

@interface AWESelectTemplateEditAssetScene : AWEScene

@property (retain, nonatomic) ACCNLEWorksCropEditManager *editManager;
@property (retain, nonatomic) UIView *textMaskView;
@property (retain, nonatomic) AWEModalTransitionDelegate *modalTransDelegate;
@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (weak, nonatomic) AWESelectTemplatePlayerViewModel *playerViewModel;

- (void)sceneDidLoad:(id)a0;
- (void)sceneWillApper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidApper:(id)a0 operation:(long long)a1;
- (void)sceneWillDisapper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidDisapper:(id)a0 operation:(long long)a1;
- (void)sceneDidUnload:(id)a0;
- (void)sceneVc_viewDidAppear:(BOOL)a0;
- (void)sceneVc_viewDidDisappear:(BOOL)a0;
- (void)p_setupEditView;
- (void)setGameplayInfoForModel:(id)a0 withIndex:(long long)a1;
- (void).cxx_destruct;

@end
