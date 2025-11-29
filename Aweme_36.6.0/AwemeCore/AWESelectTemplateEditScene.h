@class AWESelectTemplateViewModel, NSArray, AWESelectTemplatePlayerViewModel, AWESelectTemplateChoseSegmentView, UIView, UIButton;

@interface AWESelectTemplateEditScene : AWEScene

@property (retain, nonatomic) AWESelectTemplateChoseSegmentView *selectCilpView;
@property (retain, nonatomic) NSArray *originTemplateAssets;
@property (retain, nonatomic) NSArray *originVideoMaterials;
@property (copy, nonatomic) NSArray *originVideoSlots;
@property (retain, nonatomic) UIView *textMaskView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UIButton *comicFaceReminder;
@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (weak, nonatomic) AWESelectTemplatePlayerViewModel *playerViewModel;
@property (nonatomic) BOOL isCutSameScene;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)sceneDidLoad:(id)a0;
- (void)sceneWillApper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidApper:(id)a0 operation:(long long)a1;
- (void)sceneWillDisapper:(id)a0 operation:(long long)a1 duration:(double)a2;
- (void)sceneDidDisapper:(id)a0 operation:(long long)a1;
- (void)sceneDidUnload:(id)a0;
- (void)sceneVc_enterBackgroundNotification;
- (void)sceneVc_enterForegroundNotification;
- (void)displayFragmentsReload;
- (void)playerCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)onEditTextButtonAction:(id)a0;
- (void)recoverOriginTemplateData;
- (void).cxx_destruct;

@end
