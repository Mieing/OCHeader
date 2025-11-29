@class ChatBotVoIPRoomInfo, NSTimer, ChatBotBrandPCMVolumeDetector, NSString, ChatBotBrandHeadImageView, UIImageView, ReportAiChatExtInfo, MMUILabel, MMUIButton, ChatBotBrandVoiceInputButton;
@protocol ChatBotBrandVoIPTalkingViewDeleget;

@interface ChatBotBrandVoIPTalkingView : UIView <ChatBotVoIPBottomPanelDelegate, ChatBotVOIPBoardViewDelegate, ChatBotVoIPModeSelectViewDelegate, IChatBotBrandPCMDataExt, ChatBotBrandVoiceInputButtonDelegate, IChatBotVoIPExt>

@property (nonatomic) unsigned int viewStatus;
@property (nonatomic) BOOL isMicOpen;
@property (nonatomic) BOOL isAiJoinRoomSuccess;
@property (retain, nonatomic) ChatBotVoIPRoomInfo *roomInfo;
@property (retain, nonatomic) ReportAiChatExtInfo *reportAiChatExtInfo;
@property (retain, nonatomic) MMUIButton *backBtn;
@property (retain, nonatomic) ChatBotBrandHeadImageView *headImageView;
@property (retain, nonatomic) ChatBotBrandVoiceInputButton *voiceButton;
@property (retain, nonatomic) MMUILabel *roomNameLabel;
@property (retain, nonatomic) MMUILabel *roomConnectStateLabel;
@property (nonatomic) BOOL isVideoOpen;
@property (retain, nonatomic) UIImageView *aiImageView;
@property (retain, nonatomic) ChatBotBrandPCMVolumeDetector *volumeDetector;
@property (retain, nonatomic) NSTimer *connectStateTimer;
@property (nonatomic) long long connectStateDotCount;
@property (weak, nonatomic) id<ChatBotBrandVoIPTalkingViewDeleget> delegate;
@property (nonatomic) BOOL disableWelcomeEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomInfo:(id)a1 reportAiChatExtInfo:(id)a2 delegate:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomInfo:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (id)sessionId;
- (void)updateRoomInfo:(id)a0;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutLeftTopBackBtn;
- (void)close;
- (void)layoutHeadImageView;
- (void)layoutRoomNameLabel;
- (void)layoutRoomConnectStateLabel;
- (void)startConnectStateAnimation;
- (void)updateConnectStateLabelText;
- (void)setConnectTimeOut;
- (void)stopConnectStateAnimation;
- (void)layoutAIImageView;
- (void)layoutVioceButton;
- (void)updateViewStatus:(unsigned int)a0;
- (id)genTransferBoardData;
- (void)openMic;
- (void)closeMic;
- (void)interruptAISpeaking;
- (void)onTalkSuccWithRoomID:(unsigned long long)a0 openScene:(int)a1;
- (void)onTTSBegin:(id)a0;
- (void)onTTSEnd:(id)a0;
- (void)onAIComeIn:(unsigned long long)a0 memberID:(int)a1;
- (void)voiceRecordingDidBegin;
- (void)voiceRecordingDidCancel;
- (void)onChangeSpecialModel:(id)a0 modelName:(id)a1;
- (BOOL)isMicrophoneOpen;
- (void)setImageWithUrlStr:(id)a0;
- (void)performProgressBarStartAnimation;
- (void)performProgressBarStopAnimation;
- (void)inputPCMData:(char *)a0 length:(unsigned int)a1;
- (void)initVolumeDetector;
- (void)impactVibration;
- (void).cxx_destruct;

@end
