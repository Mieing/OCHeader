@protocol ACCAdvanceEditServiceInjectProtocol, ACCSequenceEditServiceProtocol, ACCAdvanceEditRootPartInjectProtocol, ACCEditServiceProtocol;

@interface ACCAdvanceEditServiceContainer : IESStaticContainer

@property (weak, nonatomic) id<ACCAdvanceEditServiceInjectProtocol> advanceInjectService;
@property (weak, nonatomic) id<ACCAdvanceEditRootPartInjectProtocol> rootPartInjectService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;

- (id)multiProvideSingleton:(id)a0 ACCAdvanceEditDataRepository:(id)a1 DVEDataRepositoryProtocol:(id)a2;
- (id)provideSingleton:(id)a0 DVEMultipleTrackViewModelRegister:(id)a1;
- (id)provideSingleton:(id)a0 ACCAdvanceEditPageService:(id)a1;
- (id)multiProvideSingleton:(id)a0 AEKMultiMegaEditor:(id)a1 AEKMegaEditor:(id)a2;
- (id)multiProvideSingleton:(id)a0 DVECoreDraftServiceProtocol:(id)a1 ACCAEDraftService:(id)a2;
- (id)provideSingleton:(id)a0 ACCAELiveDraftViewModelProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCAETrackEditor:(id)a1;
- (id)provideWeakObject:(id)a0 ACCSequenceEditServiceProtocol:(id)a1;
- (id)provideWeakObject:(id)a0 ACCEditServiceProtocol:(id)a1;
- (id)provideWeakObject:(id)a0 DVESequenceMediaContainerViewProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCAEVCTransitionProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCAEGlobalStickerServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCEditVideoFilterApplyServiceProtocol:(id)a1;
- (id)provideWeakObject:(id)a0 AWEEditKit:(id)a1;
- (id)provideWeakObject:(id)a0 ACCAdjustPreviewFPSServiceProtocol:(id)a1;
- (id)provideWeakObject:(id)a0 ACCEditMusicServiceProtocol:(id)a1;
- (id)multiProvideWeakObject:(id)a0 ACCAEViewContainerProtocol:(id)a1 DVERootViewControllerProtocol:(id)a2;
- (id)multiProvideSingleton:(id)a0 DVEEditingContextProtocol:(id)a1 DVEEditingRuntimeProtocol:(id)a2;
- (id)provideSingleton:(id)a0 DVENLEEditorProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVENLEInterfaceProtocol:(id)a1;
- (id)multiProvideWeakObject:(id)a0 ACCAdvanceEditViewModelProtocol:(id)a1 ACCAdvanceEditBeatsViewModelProtocol:(id)a2;
- (id)provideWeakObject:(id)a0 ACCAdvanceEditComponentManager:(id)a1;
- (id)provideSingleton:(id)a0 DVEModuleTemplate:(id)a1;
- (id)provideSingleton:(id)a0 ACCAdvanceActionDispatchProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVEComponentSortProtocol:(id)a1;
- (id)multiProvideSingleton:(id)a0 ACCAEComponentActionProtocol:(id)a1 DVEComponentActionProtocol:(id)a2;
- (id)provideSingleton:(id)a0 DVEAccessibilityProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVELoggerProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVEResourceLoaderProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVEEditorEventProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVECoreVideoProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVECoreAudioProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVELoadingViewProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVEAlertViewProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVEToastProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVEPlayerServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVEComponentViewManagerProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVECoreTransitionProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVECoreCanvasProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVECoreImportServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVECoreActionServiceProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVEEditConfigProtocol:(id)a1;
- (id)provideSingleton:(id)a0 DVETrackEventProtocol:(id)a1;
- (id)provideSingleton:(id)a0 ACCAEGlobalDraftDownloadProtocol:(id)a1;
- (id)provideWeakObject:(id)a0 ACCSoundFXPickerAbilityProtocol:(id)a1;
- (void).cxx_destruct;

@end
