@class NSString, ACCStudioDebouncer;
@protocol ACCSequenceEditServiceProtocol, ACCGlobalStickerServiceProtocol, ACCEditStickerServiceImplProtocol, ACCStickerServiceProtocol, AEKMegaEditor, ACCEditServiceProtocol;

@interface ACCDraftAutoSaveComponent : ACCFeatureComponent <ACCDraftAutoSaveProtocol, AEKDiffChangeSubscriber>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCGlobalStickerServiceProtocol> globalStickerService;
@property (weak, nonatomic) id<ACCEditStickerServiceImplProtocol> stickerImplService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (retain, nonatomic) ACCStudioDebouncer *debouncer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)diffResults:(id)a0 fromSource:(unsigned long long)a1;
- (void)autoSaveDraftWithScene:(unsigned long long)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (BOOL)conformPerformanceStrategy;
- (void)syncInteractionStickerWithModel:(id)a0;
- (void)trackDraftSaveEventWithModel:(id)a0 scene:(unsigned long long)a1 andStatus:(BOOL)a2;
- (BOOL)supportAutoSaveDraftScene:(unsigned long long)a0;
- (BOOL)studioEditVCIsOnTop;
- (BOOL)applicationStateIsActive;
- (void)saveDraftWithScene:(unsigned long long)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
