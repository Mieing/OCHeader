@class ACCCanvasStickerHandler, ACCEditStickerBizModule, NSString, ACCStickerContainerView, ACCTextStickerDataProvider, ACCSocialStickerDataProvider, ACCStickerServiceImpl, ACCPOIStickerDataProvider;
@protocol AWEEditKit, ACCEditPicTemplateServiceProtocol, ACCEditViewContainer, ACCEditServiceProtocol;

@interface ACCEditorStickerComponent : ACCEditorComponent <ACCTextStickerConfigProvider>

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCTextStickerDataProvider *textStickerDataProvider;
@property (retain, nonatomic) ACCSocialStickerDataProvider *socialStickerDataProvider;
@property (retain, nonatomic) ACCPOIStickerDataProvider *POIStickerDataProvider;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (retain, nonatomic) ACCStickerServiceImpl *stickerService;
@property (retain, nonatomic) ACCCanvasStickerHandler *canvasStickerHandler;
@property (retain, nonatomic) ACCEditStickerBizModule *stickerBizModule;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithCompletion:(id /* block */)a0;
- (void)configActionsOfStickerId:(id)a0 dataType:(long long)a1;
- (BOOL)enableTextRefactor;
- (void)registerServiceBinding:(id)a0 intoServiceContainer:(id)a1;
- (id)stickerContainerForSilentPublishWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buildStickerHandler;
- (id)textStickerStylePreferenceWithRepository:(id)a0;
- (void)onPOIStickerApplySuccess;
- (void)setupStickerServiceForSilentPublishWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)editorStickerConfig;
- (id)setupStickerContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 config:(id)a2;
- (void).cxx_destruct;

@end
