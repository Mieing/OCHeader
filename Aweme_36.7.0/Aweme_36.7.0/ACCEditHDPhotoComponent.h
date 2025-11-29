@class NSString, ACCEditHDPhotoViewModel;
@protocol ACCEditSpecialEffectServiceProtocol, AWERecordHDPhotoService, ACCSequenceEditServiceProtocol, ACCAIExpandServiceProtocol, ACCAIEditConflictManagerProtocol, ACCEditServiceProtocol;

@interface ACCEditHDPhotoComponent : ACCFeatureComponent <AWERecordHDPhotoServiceSubscriber, ACCEditSessionLifeCircleEvent, ACCVideoEditFlowControlSubscriber>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<AWERecordHDPhotoService> hdPhotoService;
@property (weak, nonatomic) id<ACCAIEditConflictManagerProtocol> aiConflictsService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCAIExpandServiceProtocol> aiExpandService;
@property (weak, nonatomic) id<ACCEditSpecialEffectServiceProtocol> specialEffectService;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isAfterFirstFrame;
@property (nonatomic) BOOL hadEverExitEditPage;
@property (nonatomic) BOOL replaceOnce;
@property (nonatomic) BOOL shouldReplaceHDPhotoAfterFirstFrame;
@property (retain, nonatomic) NSString *hdPhotoDraftPath;
@property (nonatomic) struct CGSize { double width; double height; } hdPhotoSize;
@property (nonatomic) double hdPhotoScale;
@property (retain, nonatomic) ACCEditHDPhotoViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)willExitEditModeWithService:(id)a0;
- (void)firstRenderWithEditService:(id)a0;
- (void)flowServiceDidTakeHDPicture:(id)a0 error:(id)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)handleReplaceHDPhotoAfterFirstFrame;
- (BOOL)enableHDPhoto;
- (BOOL)replaceMainTrackUseMegaWithImagePath:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageScale:(double)a2;
- (BOOL)replaceMainTrackUseMegaWithImage:(id)a0;
- (BOOL)enableReplaceImageBeforeFirstFrame;
- (BOOL)saveImageToDraftBeforeFirstFrame:(id)a0;
- (BOOL)enableReplaceImageBeforeWillAppear;
- (id)saveToDraftPathWithImage:(id)a0;
- (void)updateImageQuality:(id)a0 path:(id)a1;
- (BOOL)enableDeleteOriginalImage;
- (void).cxx_destruct;

@end
