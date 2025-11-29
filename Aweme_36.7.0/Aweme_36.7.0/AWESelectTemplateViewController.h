@class UIView, AWESelectTemplateViewModel, AWESelectTemplateChangeTemplateScene, NSString, ACCStickerContainerView, AWESelectTemplateEditScene, AWESelectTemplateViewProvider, AWESelectTemplatePlayerViewModel, AWESelectTemplateDataExporter;
@protocol ACCEditSpecialEffectServiceProtocol, ACCEditTransitionServiceProtocol, ACCStickerServiceProtocol, ACCVideoEditBottomControlService, ACCEditVideoFilterServiceProtocol, ACCProcessViewProtcol, ACCEditServiceProtocol;

@interface AWESelectTemplateViewController : UIViewController_scene_hook <ACCVideoEditBottomControlSubscriber, ACCEditPreviewMessageProtocol, AWEMediaSmallAnimationProtocol>

@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) id<ACCVideoEditBottomControlService> bottomService;
@property (retain, nonatomic) id<ACCEditSpecialEffectServiceProtocol> effectService;
@property (retain, nonatomic) id<ACCEditVideoFilterServiceProtocol> filterService;
@property (retain, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (retain, nonatomic) AWESelectTemplatePlayerViewModel *playerViewModel;
@property (retain, nonatomic) AWESelectTemplateViewProvider *viewProvider;
@property (retain, nonatomic) AWESelectTemplateDataExporter *templateDataExporter;
@property (retain, nonatomic) AWESelectTemplateChangeTemplateScene *changeTemplateScene;
@property (retain, nonatomic) AWESelectTemplateEditScene *editScene;
@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *progressLoadingView;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (copy, nonatomic) id /* block */ clearAllEdit;
@property (nonatomic) BOOL isFirst;
@property (copy, nonatomic) id /* block */ resetEditPagePlayerViewAndMusic;
@property (copy, nonatomic) id /* block */ updateVideoDataCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoadingView;
- (void)configViewModel;
- (void)configScene;
- (void)resetMediaPreview;
- (void)playerPlayToEnd;
- (id)mediaSmallMediaContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallMediaContainerFrame;
- (id)mediaSmallBottomView;
- (void)saveDraftIfNeed;
- (void)updateProcessWithView:(id)a0;
- (void)editBottomPanelDidTap:(id)a0 type:(long long)a1;
- (id)initWithViewModel:(id)a0 editService:(id)a1 stickerService:(id)a2 stickerContainerView:(id)a3 transitionService:(id)a4 bottomService:(id)a5 effectService:(id)a6 filterService:(id)a7 clearAllEdit:(id /* block */)a8;
- (void)presentToViewController:(id)a0;
- (void)configViewProvider;
- (void)configEditScene;
- (void)configChangeTemplateScene;
- (void)p_updateTemplateJsonFile;
- (void)saveCurrentTemplate;
- (void)dismiss;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)showLoadingView;

@end
