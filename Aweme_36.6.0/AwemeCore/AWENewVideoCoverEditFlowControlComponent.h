@class UIView, AWEVideoCoverEvaluateHandler, AWENewCoverEditFlowViewModel, AWEVideoCoverImageEditGuidePinchView, NSString, NSMutableDictionary, UIButton, ACCButton;
@protocol ACCStickerServiceProtocol, ACCEditViewContainer, ACCVideoCoverEditServiceProtocol, ACCEditServiceProtocol;

@interface AWENewVideoCoverEditFlowControlComponent : ACCFeatureComponent <AWENewVideoCoverPreviewContainerViewControllerDelegate>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UIButton *evaluateButton;
@property (retain, nonatomic) ACCButton *guideButton;
@property (retain, nonatomic) UIView *changeButton;
@property (retain, nonatomic) UIView *previewButton;
@property (retain, nonatomic) AWEVideoCoverImageEditGuidePinchView *guidePinchView;
@property (retain, nonatomic) AWENewCoverEditFlowViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) AWEVideoCoverEvaluateHandler *evaluateHandler;
@property (retain, nonatomic) NSMutableDictionary *userSetting;
@property (nonatomic) BOOL saveTrackerFromEvaluatePanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)backButtonClicked;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)saveButtonClicked;
- (void)applyButtonClicked;
- (id)p_jsonStringEncoded:(id)a0;
- (id)getNleImageAlbumEditor;
- (id)aACCMidVideoCreationProtocol;
- (BOOL)isCoverEvaluate;
- (BOOL)isSaveBtnToApply;
- (void)didClickGuideBtn;
- (void)evaluateClickGuideBtn;
- (void)changeCover;
- (void)previewCover;
- (id)evaluateResultTrackParams;
- (id)p_hexStringFromColor:(id)a0;
- (void)trackCoverGuideClick;
- (void)saveButtonClickedFromEvaluatePanel;
- (void)configTopView;
- (BOOL)hasUnsavedChange;
- (void)p_dismissAction;
- (void)saveButtonClickedWithAdjusted:(BOOL)a0;
- (id)p_templateInfoOnlyImageFilePath;
- (BOOL)p_saveImage:(id)a0 toFile:(id)a1;
- (id)getNLEImageWrapper;
- (BOOL)userVideoCoverRenderOptimize;
- (BOOL)isCoverToolsExperienceOpt1;
- (id)nleLayerForStickerView:(id)a0;
- (BOOL)hasEditElements;
- (void)saveCurrentInfo;
- (void)configCoverCutCoordinate;
- (void)saveImageAlbumTemplateStickersWithAlbumData:(id)a0 imageItem:(id)a1 containerSize:(struct CGSize { double x0; double x1; })a2;
- (void)trackSaveCoverEditWithAdjusted:(BOOL)a0 success:(BOOL)a1;
- (void)trackChangeCover;
- (void)trackPreviewCover;
- (id)geometryModelWithLayer:(id)a0 fromNLEImageWrapper:(id)a1 mediaSize:(struct CGSize { double x0; double x1; })a2 albumData:(id)a3;
- (id)fontModelWithId:(id)a0;
- (void)p_recordTextTemplateWithNLELayerView:(id)a0;
- (void)p_uploadHistoryTemplateId:(id)a0 userSetting:(id)a1;
- (BOOL)hasStickerElements;
- (void).cxx_destruct;
- (void)dismissHandler;
- (id)containerViewController;
- (void)dealloc;
- (id)inputData;

@end
