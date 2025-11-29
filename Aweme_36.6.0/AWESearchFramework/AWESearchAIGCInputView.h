@class NSString, AWESearchAIGCInputContext;
@protocol AWESearchAIGCInputViewDelegate;

@interface AWESearchAIGCInputView : UIView <AWESearchAIGCInputViewProtocol>

@property (weak, nonatomic) id<AWESearchAIGCInputViewDelegate> delegate;
@property (retain, nonatomic) AWESearchAIGCInputContext *context;
@property (nonatomic) BOOL keyboardDismissByPanelShow;
@property (nonatomic) BOOL visionContainerShowing;
@property (copy, nonatomic) id /* block */ viewDidAppearActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshContext:(id)a0;
- (void)openCamera;
- (void)switchInputMode:(unsigned long long)a0;
- (void)switchDeepThinkInTextMultiLine:(BOOL)a0;
- (id)deepThinkNetModeName;
- (BOOL)deepThinkIsOpen;
- (void)switchDeepThinkOpenMode:(BOOL)a0;
- (id)deepThinkModelName;
- (void)voiceInputEntranceKeyboardButtonTaped;
- (void)setSearchBarHeightChangedCallback:(id /* block */)a0;
- (long long)deepThinkNetModeType;
- (void)switchDeepThinkInputViewStateIsRevise:(BOOL)a0;
- (void)switchModelSelect:(id)a0 conversationID:(id)a1;
- (id)currentConversationMode:(id)a0;
- (void)saveModeForNewConversationID:(id)a0;
- (id)deepThinkPlaceholder;
- (void)dismissVisionContainerViewIfNeed;
- (void)exchangeContent:(id)a0;
- (void)showFlashAnimation;
- (void)resetEditStatus;
- (void)lastQueryGuideRemoveIfNeed;
- (void)invokeKeyboard:(BOOL)a0;
- (id)lastQueryGuideCurrentQuery;
- (BOOL)isModelSelectViewShow;
- (void)dismissPanelContainerViewIfNeedUseKeyboardAnimation:(BOOL)a0;
- (void)operateInputViewEdit:(unsigned long long)a0 clearContent:(BOOL)a1;
- (void)clearPatternConfig;
- (void)hideCreatePanelViewIfNeeded;
- (void)updatePatternConfig:(id)a0;
- (void)operateInputViewEdit:(unsigned long long)a0 clearContent:(BOOL)a1 shouldResumeText:(BOOL)a2;
- (void)clearResumeText;
- (void)exchangeContent:(id)a0 shouldShowKeyBoard:(BOOL)a1;
- (void)lastQueryGuideUpdateWithComplete:(id /* block */)a0;
- (id)lastQueryGuideLogPB;
- (void)operateInputViewEdit:(unsigned long long)a0;
- (void)configWithKeyboardState:(unsigned long long)a0 notification:(id)a1;
- (void)dismissPanelContainerViewIfNeed;
- (id)luckyServiceToastTargetView;
- (void)retractKeyboard;
- (void)thinkModeDidSelectWithParams:(id)a0;
- (void)changeQueryContextIfNeeded:(id)a0;
- (id)getSearchSource;
- (id)getPictureSource;
- (id)getEnterMethodSecond;
- (void)switchDeepSeekMode:(BOOL)a0;
- (void)updateDeepSeekView;
- (struct CGSize { double x0; double x1; })getInputAreaWrapperSize;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (id)init;

@end
