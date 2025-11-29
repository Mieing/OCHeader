@class AWEIMMessageConversation, AWEIMMessageVoipButton, AWEIMConversationContext, UIStackView;
@protocol AWEIMMessageVoipEntranceViewDelegate;

@interface AWEIMMessageVoipEntranceView : UIView

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMConversationContext *conversationContext;
@property (retain, nonatomic) AWEIMMessageVoipButton *audioBtn;
@property (retain, nonatomic) AWEIMMessageVoipButton *videoBtn;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL isDisableAudio;
@property (nonatomic) BOOL isDisableVideo;
@property (nonatomic) BOOL selectListShowing;
@property (weak, nonatomic) id<AWEIMMessageVoipEntranceViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ voipEntranceViewSelectAndInvokeGroupVoipCallback;

+ (id)messageVoipEntranceViewWithModel:(id)a0 conversationContext:(id)a1;

- (unsigned long long)entranceType;
- (void)p_layout;
- (id)initWithModel:(id)a0 conversationContext:(id)a1;
- (void)p_createUIComponents;
- (void)p_configUIComponents;
- (void)p_configHitTestIfNeeded;
- (BOOL)p_isRTVAudioEnable;
- (BOOL)p_isRTVVideoEnable;
- (void)onAudioBtnClicked;
- (void)p_onVideoBtnClicked;
- (BOOL)p_shouldShowAudioBtn;
- (BOOL)p_shouldShowVideoBtn;
- (void)trackChatVideoCallClickMediaType:(id)a0;
- (void)p_startAudioVoip;
- (void)didClickGroupVoipButtonWithType:(long long)a0;
- (void)p_startVideoVoip;
- (void)selectAudio;
- (void)p_showSheetView;
- (void)selectVideo;
- (void)p_startVoip:(long long)a0;
- (void)didStartVoipType:(long long)a0;
- (void)p_selectGroupVoipWithType:(long long)a0;
- (BOOL)p_isAudioBtnAvailable;
- (long long)p_audioVoipEntranceType;
- (BOOL)p_shouldShowGroupAudioEntrance;
- (BOOL)p_isEnableWithIsVideo:(BOOL)a0;
- (id)p_bubbleStoreKey;
- (void).cxx_destruct;

@end
