@class NSString, RACSubject, AWEStudioEditStickerFeatureConfig, ACCAnimatedButton;
@protocol ACCEditViewContainer, ACCStickerServiceProtocol, ACCEditMusicServiceProtocol;

@interface AFDSocialTextStickerComponent : ACCTextStickerComponent <ACCTextStickerHandlerDelegate, AFDSocialTextStickerService>

@property (retain, nonatomic) AWEStudioEditStickerFeatureConfig *featureConfig;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> editMusicService;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (nonatomic) BOOL hasAutoStartedTextSticker;
@property (nonatomic) BOOL isEditing;
@property (retain, nonatomic) RACSubject *finishedEditAnimationSubject;
@property (retain, nonatomic) RACSubject *backButtonClickedSubject;
@property (nonatomic) BOOL shouldClickBackWhenFinishEditAnimation;
@property (nonatomic) BOOL hasTrackedForInputText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (BOOL)isImageAlbumEdit;
- (void)componentDidMount;
- (id)serviceBindingArray;
- (void)backButtonDidClick;
- (id)displayTextTemplateStyle;
- (id)textStickerEditToolBarItems;
- (BOOL)enableTextRefactor;
- (void)onStartQuickTextInput;
- (id)editingAttributedPlaceholder;
- (void)startTextSticker;
- (BOOL)editViewShouldUseMemoryAlignment;
- (unsigned long long)customAbilityOptionsOfEditView;
- (BOOL)shouldAddMaskInfoSticker;
- (id)customCancelView;
- (void)didExitedTextStickerEditView:(BOOL)a0 stickerId:(id)a1;
- (BOOL)shouldLoadComponent;
- (id)finishedEditAnimationSignal;
- (id)backButtonClickedSignal;
- (void)injectCustomHandler;
- (BOOL)shouldAutoStartTextEdit;
- (void)stickerViewDidFinishEdit;
- (void)stickerViewDidFinishEditAnimation;
- (void).cxx_destruct;
- (void)dealloc;

@end
