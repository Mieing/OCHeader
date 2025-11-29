@class CECMomentCameraPreviewViewModel, NLEInterface_OC, NSString, NSMutableArray, DVETextModeStickerManager;
@protocol CECMomentCameraFlowService, CECMomentCameraSubModeService, AFDMCEditService, CECMomentCameraService;

@interface CECMomentCameraTextViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber, CECMomentCameraTextInterface>

@property (nonatomic) BOOL enterTextModeFromRecorder;
@property (nonatomic) BOOL enterTextEditFromPublish;
@property (nonatomic) BOOL shouldShowTextStickerPreview;
@property (nonatomic) BOOL isTextStickerPanning;
@property (nonatomic) BOOL isTextStickerViewEnterEdit;
@property (nonatomic) BOOL isHasTextSticker;
@property (nonatomic) unsigned long long stickerUpdateCount;
@property (nonatomic) BOOL isItemHidden;
@property (nonatomic) BOOL shouldDisable;
@property (retain, nonatomic) NSMutableArray *textModelArr;
@property (retain, nonatomic) NLEInterface_OC *tempNLESession;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (weak, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (retain, nonatomic) DVETextModeStickerManager *textModeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)textModels;
- (void)prefetchFontEffects;
- (void)bindObserver;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)toggleTextMode;
- (void)injectService;
- (void)composeImageFromNLE:(id /* block */)a0;
- (void)composeLivePhotoFromPublish:(BOOL)a0 isRenderVideo:(BOOL)a1 completion:(id /* block */)a2;
- (id)textStickerContents;
- (void)addTextModelToArr:(id)a0;
- (void)updateTextStickerShowState;
- (void)storeTextStickerWithNLE:(id)a0 completion:(id /* block */)a1;
- (void)clearTextData;
- (void)configManagerAction;
- (void)p_updateWithFlowState:(long long)a0;
- (void)p_updateHasTextStickerState;
- (double)p_canvasRatioForCompose;
- (void)p_configBackgroundImageToMainTrackWithNLE:(id)a0;
- (id)p_tempVEPreviewForComposeImage:(id)a0;
- (void)p_progressImageForLivePhotoWith:(id)a0 completion:(id /* block */)a1;
- (void)p_progressVideoForLivePhotoWith:(id)a0 videoURL:(id)a1 completion:(id /* block */)a2;
- (void)p_samplingLivePhoto:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
