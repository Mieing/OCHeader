@class NPGenericTemplateService_OC, AWEGenericTemplateApplierContext, NSMutableDictionary, NSMutableArray, AWEGenericTemplateApplier, ACCPicTemplateApplyDataProcessor;
@protocol ACCEditorRecoverServiceProtocol, ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCEditStickerServiceImplProtocol, ACCStickerGestureComponentProtocol, ACCPicTemplateApplyHandlerDelegate, NPPreprocessAIGCDelegateProtocol_OC, IESServiceProvider;

@interface ACCPicTemplateApplyHandler : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) NPGenericTemplateService_OC *presetService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditorRecoverServiceProtocol> recoverService;
@property (weak, nonatomic) id<ACCEditStickerServiceImplProtocol> stickerServiceImpl;
@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (weak, nonatomic) id<NPPreprocessAIGCDelegateProtocol_OC> aigcDelegate;
@property (retain, nonatomic) AWEGenericTemplateApplierContext *context;
@property (nonatomic) BOOL enableAIGCAbility;
@property (nonatomic) BOOL enableAIMattingAbility;
@property (retain, nonatomic) AWEGenericTemplateApplier *templateUnifyApplier;
@property (retain, nonatomic) ACCPicTemplateApplyDataProcessor *applyDataProcessor;
@property (retain, nonatomic) NSMutableDictionary *preprocessTemplateMap;
@property (retain, nonatomic) NSMutableDictionary *preprocessFailedMap;
@property (retain, nonatomic) NSMutableArray *applyingMultiSlotProjectList;
@property (nonatomic) BOOL isCoverTemplate;
@property (weak, nonatomic) id<ACCPicTemplateApplyHandlerDelegate> applyDelegate;
@property (retain, nonatomic) NSMutableArray *applyingProjectCacheList;

- (void)removePicTemplateWithRemoveContext:(id)a0 completion:(id /* block */)a1;
- (void)cancelAllPreprocessTaskIfNeed:(id)a0;
- (void)cancelCurrentPreprocessTask:(id)a0 templateId:(id)a1;
- (void)cancelAllAIGCTaskIfNeed:(id)a0;
- (void)applyPicTemplateWithApplyContext:(id)a0 completion:(id /* block */)a1;
- (void)removeEffectPicTemplateIfNeedWith:(id)a0 editService:(id)a1;
- (id)initWithServiceProvider:(id)a0 presetService:(id)a1;
- (void)cancelCurrentPreprocessTaskIfNeed:(id)a0 templateId:(id)a1;
- (void)prepareToApplyPicTemplateWithApplyContext:(id)a0;
- (id)setupApplyConfigWithContext:(id)a0 targetNleModel:(id)a1 completion:(id /* block */)a2;
- (id)setupRemoveConfigWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleWillRemoveTemplateWithContext:(id)a0 isPureRemove:(BOOL)a1;
- (void)handleDidRemoveTemplateWithContext:(id)a0 isPureRemove:(BOOL)a1;
- (BOOL)needPreprocessWithContext:(id)a0;
- (void)handleWillApplyTemplateWithContext:(id)a0;
- (void)insertProjectFromMultiSlotTemplateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleDidApplyTemplateWithContext:(id)a0;
- (void)handleDidUpdateApplyVideoDataWithContext:(id)a0;
- (void)handleFirstFrameRenderTemplateWithContext:(id)a0;
- (void)handleDidPreprocessWithContext:(id)a0;
- (void)handleDidUpdateRemoveVideoDataWithContext:(id)a0;
- (void).cxx_destruct;

@end
