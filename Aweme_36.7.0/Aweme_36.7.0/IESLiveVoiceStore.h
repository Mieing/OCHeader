@class HTSLiveCommentApi, HTSEventContext, NSString, HTSLiveUser_PublicAreaBadgeInfo, IESLiveComponentContext, IESLiveVoiceTranslater, HTSLiveImage;
@protocol IESLiveAudioPlaybackProvider, IESLiveAudioRecorderProvider, IESLiveRoomService;

@interface IESLiveVoiceStore : NSObject <IESLiveAudioRecorderDelegate, HTSLiveMessageSubscriber, HTSLiveRoomRemoteActions, IESLiveCommentVoiceService>

@property (retain, nonatomic) HTSLiveCommentApi *commentApi;
@property (nonatomic) BOOL disableVoiceInput;
@property (nonatomic) BOOL didEnterRoomExecuted;
@property (retain, nonatomic) id<IESLiveAudioRecorderProvider> recorder;
@property (retain, nonatomic) id<IESLiveAudioPlaybackProvider> audioPlayback;
@property (nonatomic) BOOL forceHide;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveVoiceTranslater *voiceTranslater;
@property (nonatomic) BOOL enableAudioChat;
@property (nonatomic) BOOL enableAutoPlay;
@property (copy, nonatomic) NSString *toastString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveUser_PublicAreaBadgeInfo *localPublicAreaBadgeInfo;
@property (nonatomic) long long showIdentity;
@property (retain, nonatomic) HTSLiveImage *identityLabel;

- (id)badgeImageListV2Array;
- (BOOL)convergedModule;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (void)didEnterLiveRoom:(id)a0;
- (void)fetchAudioChatCodeFinished:(id /* block */)a0;
- (void)resendAudioChatMessage:(id)a0;
- (void)commentForbidden:(BOOL)a0;
- (void)sendAnchorSpeechCommentMessageWithPath:(id)a0 duration:(double)a1 rtfContent:(id)a2 content:(id)a3 atUserContent:(id)a4;
- (id)initWithRoomModel:(id)a0 diContext:(id)a1;
- (BOOL)isInMseqRoom;
- (void)checkAudioCommentAppearWithForceOption:(BOOL)a0;
- (void)sendAudioCommentWithPath:(id)a0 duration:(long long)a1;
- (void)checkAudioCommentDisableWithForceOption:(BOOL)a0;
- (void)fetchAudioChatConfigIfNeeded;
- (id)createFakeAudioChatMessageWithPath:(id)a0 duration:(long long)a1 rtfContent:(id)a2 content:(id)a3;
- (void)sendVoiceMessage:(id)a0 isResend:(BOOL)a1;
- (void)sendAnchorSpeechCommentMessage:(id)a0;
- (void)checkAudioChatAuth;
- (void)recorderWillStart:(id)a0;
- (void)recorder:(id)a0 didReceivedAudioData:(struct IESLiveAudioQueueInputData { void *x0; struct OpaqueAudioQueue *x1; struct AudioQueueBuffer *x2; struct AudioTimeStamp *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; } *)a1;
- (void)recorderDidStop:(id)a0;
- (void)recorderWithError:(id)a0;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
