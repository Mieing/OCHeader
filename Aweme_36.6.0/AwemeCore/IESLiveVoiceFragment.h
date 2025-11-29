@class IESLiveVoiceStore, NSString, IESLiveCommentExpandEntryItem, IESLiveAudioPlayback, NSObject, IESLiveVoiceTranslater;
@protocol OS_dispatch_queue, IESLiveAudioRecorderProvider;

@interface IESLiveVoiceFragment : IESLiveRoomComponent <HTSLiveIntimateChatAudienceActions, IESLiveLayoutSceneActions, IESLiveInteractAction, IESLiveVoiceFuncPanelViewDelegate, IESLiveSocialInteractAction, IESLiveVoiceRouter>

@property (nonatomic) long long orientation;
@property (retain, nonatomic) IESLiveVoiceStore *store;
@property (retain, nonatomic) IESLiveAudioPlayback *audioPlayback;
@property (retain, nonatomic) id<IESLiveAudioRecorderProvider> recorder;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordSerailQueue;
@property (retain, nonatomic) IESLiveVoiceTranslater *voiceTranslater;
@property (retain, nonatomic) IESLiveCommentExpandEntryItem *voiceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (BOOL)disableVoiceInput;
- (void)didJoinChannelWithLayout:(id)a0;
- (BOOL)didConnectToAnchor;
- (void)checkVoiceAuth;
- (void)resendAudioChatMessage:(id)a0;
- (void)commentForbidden:(BOOL)a0;
- (void)sendAnchorSpeechCommentMessageWithPath:(id)a0 duration:(double)a1 rtfContent:(id)a2 content:(id)a3 atUserContent:(id)a4;
- (void)didJoinRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (void)updateAuidoCommentStatus;
- (void)registerVoiceEntryOnCommentExpandEntry;
- (void)changeVoiceItemImageWithType:(long long)a0;
- (BOOL)voiceTranslateCommentExpandEnable;
- (BOOL)voiceMsgCommentExpandEnable;
- (long long)checkDefaultVoiceItem;
- (void)sendVoiceMessageWithDuration:(double)a0 maxDuration:(double)a1;
- (BOOL)voicePanelUseLandscapeStyle;
- (BOOL)shouldHideForAudienceDidConnectToAnchor;
- (void)panelView:(id)a0 willShowFuncWithType:(long long)a1;
- (long long)getDefaultVoiceType;
- (void).cxx_destruct;

@end
