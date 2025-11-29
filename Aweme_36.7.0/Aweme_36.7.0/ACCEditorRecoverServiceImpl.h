@class NSMutableDictionary, NSArray, AWEBinding, AWEVideoPublishViewModel, NSString;
@protocol ACCTextStickerServiceProtocol, ACCEditStickerServiceImplProtocol, ACCStickerServiceProtocol, IESServiceProvider, ACCEditTagStickerServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditServiceProtocol;

@interface ACCEditorRecoverServiceImpl : NSObject <ACCEditorRecoverServiceProtocol, ACCStickerServiceSubscriber>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditStickerServiceImplProtocol> stickerServiceImpl;
@property (weak, nonatomic) id<ACCTextStickerServiceProtocol> textStickerService;
@property (weak, nonatomic) id<ACCEditTagStickerServiceProtocol> editTagStickerService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (retain, nonatomic) NSMutableDictionary *canvasChangedMap;
@property (retain, nonatomic) NSMutableDictionary *textReadingMap;
@property (retain, nonatomic) AWEBinding *currentPlayerTimeBinding;
@property (retain, nonatomic) AWEBinding *recoverLyricStickerSignal;
@property (copy, nonatomic) NSArray *toBeRemovedTextReadingAssets;
@property (nonatomic) BOOL hasShowVideoTemplateStickerGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)stickerContainerAlreadyUpdate;
- (void)canvasHasChangedWithProject:(id)a0 projectUUID:(id)a1;
- (void)canvasHasChangedWithProjectForVideoTemplate:(id)a0 projectUUID:(id)a1 shouldResetStickerGestureView:(BOOL)a2 shouldRemoveEmbeddedSticker:(BOOL)a3 isLandingEditPage:(BOOL)a4 lastCanvasSize:(struct CGSize { double x0; double x1; })a5;
- (void)canvasHasChangedForTemplateEditSlot;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })resetSafeAreaWithPublishViewModel:(id)a0;
- (void)showVideoTemplateStickerEditGuideIfNeeded;
- (void)syncStickersDataWithVE;
- (void)recoverStickerWrapperBoxSize;
- (void).cxx_destruct;

@end
