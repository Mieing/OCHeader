@class NSString;
@protocol ACCSequenceEditServiceProtocol, ACCRealLivePhotoService, ACCEditViewContainer, ACCCTRServiceProtocol, ACCEditServiceProtocol;

@interface ACCSlidesCropComponent : ACCFeatureComponent <ACCSlidesCropViewControllerTracker, ACCRealLivePhotoServiceSubscriber, ACCFeatureComponentReloadableProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *currentProjectUUID;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (weak, nonatomic) id<ACCRealLivePhotoService> realLivePhotoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)livePhotoDidChangeMode:(unsigned long long)a0;
- (id)commonTrackParams;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)componentDidReload;
- (void)componentWillReload;
- (id)p_cropBarItem;
- (void)p_clickedCropBarItemWithAnimation:(BOOL)a0;
- (void)p_trackClickCropBarItem;
- (void)p_jumpToCropVCWithAnimation:(BOOL)a0;
- (void)observeMultiEditorSignal;
- (void)updateBarItem;
- (BOOL)needShowTrimCropBar;
- (void)putInCropInfo:(id)a0;
- (void)obtainCropInfoWithCompletion:(id /* block */)a0;
- (id)obtainCurrentProject;
- (long long)obtainCropRatioWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)obtainCanvasInfoWithProject:(id)a0 Completion:(id /* block */)a1;
- (BOOL)rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCenterOfSize:(struct CGSize { double x0; double x1; })a1;
- (void)putInCanvasInfoWithVertics:(id)a0 cropRatio:(long long)a1;
- (id)transToVerticesWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)obtainTargetProjectWithUUID:(id)a0;
- (long long)obtainIndexWithProjectUUID:(id)a0;
- (void)selectCropRatio:(id)a0 isDefault:(BOOL)a1;
- (void)p_trackCloseCrop:(id)a0;
- (void)p_trackConfirmCropRatio:(id)a0 isDefault:(BOOL)a1 originRatio:(id)a2 isPinch:(BOOL)a3;
- (void)p_trackDidEndZoom:(id)a0 pinchType:(id)a1;
- (void).cxx_destruct;

@end
