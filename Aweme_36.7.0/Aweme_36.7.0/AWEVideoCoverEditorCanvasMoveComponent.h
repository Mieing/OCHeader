@class AWEVideoCoverEditorCanvasMoveHandler, NSString;
@protocol AWECoverEditPicTemplateServiceProtocol, ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, AWECoverNLEEditorRevertService, ACCEditServiceProtocol;

@interface AWEVideoCoverEditorCanvasMoveComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCSequenceEditServicePlayerSubscriber, ACCEditPreviewMessageProtocol, ACCEditPicTemplateServiceSubscriber>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<AWECoverEditPicTemplateServiceProtocol> picTemplateService;
@property (retain, nonatomic) id<AWECoverNLEEditorRevertService> editorRevertService;
@property (retain, nonatomic) AWEVideoCoverEditorCanvasMoveHandler *canvasMoveHandler;
@property (nonatomic) BOOL hasLoaded;
@property (nonatomic) double lastTrackTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)firstRenderWithEditService:(id)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (void)refreshCanvasSticker;
- (void)syncSequenceStickerStatus:(unsigned long long)a0;
- (void)setupCanvasSticker;
- (void)applySuccessWithTemplate:(id)a0 projectUUID:(id)a1;
- (void)didRemoveTemplateWith:(id)a0 projectUUID:(id)a1;
- (void)setupRedoAndUndo;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
