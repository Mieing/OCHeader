@class NSString;

@interface IESIMInputAudioBusinessComponent : AWEIMComponentBase <IESIMInputAudioComponentBusinessInterface, AWEUserMessage, IESIMInputAudioComponentAction>

@property (nonatomic) BOOL enableRecord;
@property (nonatomic) BOOL delayAudioIconLongPressRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (void)audioBtnClicked:(id)a0;
- (void)didRecordViewTouchDown;
- (void)beginRecorderAnimation;
- (void)stopRecorderAnimation;
- (void)didSendVoiceTextMessage:(id)a0;
- (id)audioInputTrackStatusWithInputType:(long long)a0;
- (BOOL)shouldDisableSendWhileAIReplyingWithToast:(BOOL)a0;
- (void)audioBtnClickedAfterWithLongPress:(BOOL)a0 isButtonClick:(BOOL)a1;
- (void)p_trackUseAudioMessageError;
- (void)p_trackNewInputStatusSwitchWithConv:(id)a0 originType:(long long)a1 currentType:(long long)a2;
- (void)restoreAudioType;
- (void)audioBtnLongPressed:(id)a0;
- (void)didSendFormatVoiceTextMessage:(id)a0;
- (BOOL)shouldShowAudioBtn;
- (BOOL)needSwitchToAudioType;

@end
