@class NSMutableDictionary;
@protocol ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, IESServiceProvider, ACCEditStickerServiceImplProtocol, ACCEditorRecoverServiceProtocol, ACCStickerGestureComponentProtocol;

@interface ACCPicTemplateApplyDataProcessor : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditorRecoverServiceProtocol> recoverService;
@property (weak, nonatomic) id<ACCEditStickerServiceImplProtocol> stickerServiceImpl;
@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (retain, nonatomic) NSMutableDictionary *backupSlotMap;
@property (retain, nonatomic) NSMutableDictionary *previewModeCacheMap;
@property (nonatomic) long long fpsType;
@property (nonatomic) BOOL shouldTrackFps;

- (void)startDraggingItemWithType:(long long)a0;
- (void)updateSlotWithCurrentUUID:(id)a0 targetNleModel:(id)a1;
- (void)backupOriginalSlotWithProject:(id)a0;
- (void)createNewNleModelWithPublishViewModel:(id)a0 genericTemplate:(id)a1 completion:(id /* block */)a2;
- (void)generateApplyTargetNleModelWithPublishViewModel:(id)a0 templateModel:(id)a1 completion:(id /* block */)a2;
- (void)addMultiPicTemplateProjectWithNLEModel:(id)a0 beforeProject:(id)a1 sequenceEditService:(id)a2 createCompletion:(id /* block */)a3 addCompletion:(id /* block */)a4;
- (void)backupPreviewModeWithProject:(id)a0;
- (void)recoverPreviewModeWithProject:(id)a0;
- (void)registerStickerMoveFps:(id)a0 templateModel:(id)a1;
- (void)registerTemplateRenderSubstageBlkWithProject:(id)a0 templateModel:(id)a1 needReport:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
