@class MMUILabel, StreamVoiceInputLogic, NSString, StreamVoiceInputControlView, MMUIButton, UIButton;
@protocol MMLiveVoiceInputViewDelegate;

@interface MMLiveVoiceInputView : UIView <IStreamVoiceInputExt, StreamVoiceInputControlViewDelegate, INetworkStatusMgrExt, WCActionSheetDelegate>

@property (retain, nonatomic) MMUILabel *pressToInputLabel;
@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) MMUIButton *cancelBtn;
@property (retain, nonatomic) MMUIButton *sendBtn;
@property (retain, nonatomic) UIButton *languageBtn;
@property (retain, nonatomic) StreamVoiceInputControlView *voiceInputCtrlBtn;
@property (retain, nonatomic) StreamVoiceInputLogic *voiceInputLogic;
@property (retain, nonatomic) NSString *lastVoiceInputResult;
@property (nonatomic) long long inputStatus;
@property (nonatomic) unsigned long long currentInputId;
@property (nonatomic) unsigned int curInputLanguageType;
@property (weak, nonatomic) id<MMLiveVoiceInputViewDelegate> delegate;
@property (readonly, nonatomic) double preferHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)layoutInputCtrlBtn;
- (void)layoutLanguageBtn;
- (void)updateLanguageBtn:(id)a0;
- (void)layoutCloseBtn;
- (void)layoutPressToInputLabel;
- (void)layoutSendAndCancelBtn;
- (void)lazyRefresh;
- (void)resetStatus;
- (void)createInputCtrlBtnIfNeeded;
- (void)createLanguageBtnIfNeeded;
- (void)createCloseBtnIfNeeded;
- (void)createPressToInputLabelIfNeeded;
- (void)createCancelBtnIfNeeded;
- (void)createSendBtnIfNeeded;
- (BOOL)isRecording;
- (void)updateUIComponentsFade:(BOOL)a0;
- (void)userTryToRecord;
- (void)userTryToEndRecord;
- (void)doCancelWithResetResult:(BOOL)a0;
- (void)updateVoiceInputResult:(id)a0;
- (BOOL)shouldShowLanguageSwitchButton;
- (id)getSelectedLanguageName;
- (void)showLanguageSelectView;
- (BOOL)isUsingPortraitLayoutStyle;
- (void)onCloseBtnClicked;
- (void)onCancelBtnClicked;
- (void)onSendBtnClicked;
- (void)userDidHoldBegin;
- (void)userDidHoldEnd:(BOOL)a0;
- (void)OnStartRecord:(unsigned int)a0;
- (void)OnEndRecord:(unsigned int)a0;
- (void)OnLevelMeter:(unsigned int)a0 Peak:(float)a1;
- (void)onGetResultText:(id)a0 andInputId:(unsigned int)a1;
- (void)OnError:(int)a0 andInputId:(unsigned int)a1;
- (void)OnVoiceTransEnd:(unsigned int)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
