@class ACCRichTextEditorManager, NSString, RACSubject, RACSignal, AWEVideoPublishViewModel;
@protocol ACCEditMusicServiceProtocol, IESServiceProvider;

@interface ACCRichTextEditorContainerViewModel : NSObject <ACCRichTextEditorViewManagerDelegate, ACCRichTextEditorServiceProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCRichTextEditorManager *richTextEditorViewManager;
@property (nonatomic) BOOL disableInteraction;
@property (retain, nonatomic) RACSubject *updateColorStyleSubject;
@property (retain, nonatomic) RACSubject *didClickPrivacySubject;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (nonatomic) BOOL webViewFirstRender;
@property (nonatomic) BOOL webViewSetContentReady;
@property (nonatomic) long long currentToolbarStyle;
@property (nonatomic) BOOL poiPanelShowing;
@property (nonatomic) BOOL settingPanelShowing;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) BOOL autoSelectMusicFinish;
@property (copy, nonatomic) id /* block */ keyboardStatusChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RACSignal *updateColorStyleSignal;
@property (readonly, nonatomic) RACSignal *didClickPrivacySignal;

- (void)setupPublishViewModel:(id)a0;
- (void)privacySettingsDismiss;
- (void)asyncSaveOriginTextWithCompletionBlock:(id /* block */)a0 isPublishSave:(BOOL)a1;
- (void)asyncSaveOriginTextWithCompletionBlock:(id /* block */)a0;
- (BOOL)webViewContentFirstRenderSuccess;
- (void)resiginTextEditing;
- (void)draftBackAlert;
- (void)showMaskViewIfNeeded;
- (void)clearMaskView;
- (void)startTextEditing;
- (void)configPoiID:(id)a0 poiName:(id)a1;
- (id)richTextManagerSelectedPoiID;
- (void)richTextManagerUpdateCurrentColorStyleWith:(long long)a0;
- (void)richTextManagerWebViewFirstRender;
- (void)richTextManagerSetContentReady;
- (void)richTextManagerEnableInteraction:(BOOL)a0;
- (void)richTextManagerDidClickPublishPrivacy;
- (BOOL)richTextManagerEnableShowKeyboard;
- (void)richTextManagerKeyboardWillShow;
- (void)richTextManagerKeyboardWillHidden;
- (void)richTextManagerDidClickPOIButton;
- (void).cxx_destruct;
- (void)dealloc;

@end
