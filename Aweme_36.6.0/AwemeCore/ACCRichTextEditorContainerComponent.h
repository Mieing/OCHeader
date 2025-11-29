@class NSString, UIImageView, UIView, ACCRichTextEditorContainerViewModel;
@protocol ACCQuickSaveService, ACCEditCutMusicServiceProtocol, ACCEditMusicServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCVideoEditBottomControlService, ACCEditServiceProtocol;

@interface ACCRichTextEditorContainerComponent : ACCFeatureComponent <ACCEditPublishSettingsServiceSubscriberProtocol>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCQuickSaveService> quickSaveService;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (weak, nonatomic) id<ACCEditCutMusicServiceProtocol> cutMusicService;
@property (retain, nonatomic) ACCRichTextEditorContainerViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) UIView *dummyMediaView;
@property (nonatomic) BOOL p_isViewAppear;
@property (nonatomic) BOOL p_isActive;
@property (nonatomic) BOOL keyboardWillShowStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)privacySettingsDismiss;
- (void)updateMusicAfterEnteringEditPage;
- (void)updateMusicAfterMusicInfoChanged;
- (void)p_updateMusicModelBgmAssetForDetailMusic:(id)a0;
- (void)p_updateMusicClipRangeIfNeeded;
- (struct _HTSAudioRange { double x0; double x1; })p_defaultMusicRange;
- (void)resiginTextEditing;
- (void)conditionPlayMusic:(BOOL)a0;
- (void)conditionPlayMusic:(BOOL)a0 forcePlay:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createSubviews;

@end
