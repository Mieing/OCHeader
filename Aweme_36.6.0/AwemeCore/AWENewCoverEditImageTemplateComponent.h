@class AWEImageTemplateEditVC2230, NSString, UIView, ACCNLEImageWrapper, ACCStickerContainerView, ACCNLELayerService, AWENewCoverEditImageTemplateViewModel, AWENewCoverEditImageTemplateRenderServiceHelper;
@protocol ACCStickerServiceProtocol, ACCEditViewContainer, ACCStickerProtocol, ACCCTRServiceProtocol, ACCEditServiceProtocol;

@interface AWENewCoverEditImageTemplateComponent : ACCFeatureComponent <ACCPanelViewDelegate, AWEImageTemplateListViewDelegate, AWENewCoverEditImageTemplateRenderServiceHelperDelegate, ACCEditImageAlbumMixedMessageProtocol, AWEImageTemplateEditVC2230Delegate>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (retain, nonatomic) AWENewCoverEditImageTemplateViewModel *viewModel;
@property (retain, nonatomic) AWENewCoverEditImageTemplateRenderServiceHelper *renderServiceHelper;
@property (retain, nonatomic) AWEImageTemplateEditVC2230 *templateSelectVC;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) ACCNLELayerService *NLEImageService;
@property (retain, nonatomic) NSString *templatePath;
@property (copy, nonatomic) id /* block */ startEditTextLayerCallBack;
@property (copy, nonatomic) id /* block */ endEditTextLayerCallBack;
@property (weak, nonatomic) ACCNLEImageWrapper *NLEImageWrapper;
@property (weak, nonatomic) UIView<ACCStickerProtocol> *selectedStickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)geometryModelWithLayer:(id)a0 fromNLEImageWrapper:(id)a1 mediaSize:(struct CGSize { double x0; double x1; })a2;
+ (id /* block */)viewConstrutor;
+ (id /* block */)viewConfigConstrutor;

- (void)clickAction;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 willDismissPanelView:(id)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)bindServices:(id)a0;
- (void)addBarItemToToolBar;
- (long long)currentImageEditorIndex;
- (id)currentImageItemModel;
- (void)onImageEditorRecoveredAtIndex:(long long)a0;
- (void)updateLayerViewInStickerContainer:(id)a0 withUpdatedModule:(id)a1;
- (void)registerInputModule;
- (void)templateListLoadSuccess;
- (void)imageTemplateList:(id)a0 didPanWithRatio:(double)a1 finished:(BOOL)a2 dismiss:(BOOL)a3;
- (void)setApplyTemplateLockWithShouldLocked:(BOOL)a0;
- (void)clearImageTemplate;
- (void)templateListView:(id)a0 checkBeforeSelectIdxPath:(id)a1 isInvertSelect:(BOOL)a2 resumeAction:(id /* block */)a3;
- (void)retryFetchingTemplateList;
- (void)selectImageTemplateWithMediaID:(id)a0 templateID:(id)a1 tabName:(id)a2;
- (long long)recoveryLayerViewWithStickerInfos:(id)a0;
- (id)addLayerViewWithstickerInfo:(id)a0;
- (id)restoreLayerWithStickerInfo:(id)a0;
- (id)getNLEImageWrapper;
- (id)editImageTemplateItem;
- (BOOL)ifNoSticker;
- (BOOL)ifNoTagSticker;
- (BOOL)ifNoFilter;
- (BOOL)ifNoTemplate;
- (void)resetImageWithTemplatePath:(id)a0 restoreInfo:(id)a1;
- (void)renderImageTemplateIfSuccess:(BOOL)a0;
- (void)removeStickerContainerForLayer:(id)a0;
- (void)setupStickerModuleWithMediaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
