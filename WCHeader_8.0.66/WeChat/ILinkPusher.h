@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ILinkAudioFrameDelegate;

@interface ILinkPusher : MMUserService <ILinkPushApiDelegate, ILinkPusherAudioDataDelegate, MMServiceProtocol> {
    NSString *_rtmpUrl;
    int _videoFPS;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _videoPixelBufferListLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue;
@property (retain, nonatomic) NSMutableArray *videoPixelBufferList;
@property (nonatomic) BOOL isInRoom;
@property (nonatomic) BOOL enableCustomAudio;
@property (weak, nonatomic) id<ILinkAudioFrameDelegate> audioFrameDelegate;
@property (nonatomic) struct shared_ptr<wxvoipsdk::ILinkPusherAudioDataCallback> { struct ILinkPusherAudioDataCallback *__ptr_; struct __shared_weak_count *__cntrl_; } ilinkPuhserAudioDataCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startILinkPushService;
- (void)enterRoom:(id)a0;
- (void)exitRoom;
- (void)sendCustomAudioData:(char *)a0 length:(unsigned int)a1;
- (void)sendCustomVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)sendCustomMessage:(id)a0;
- (void)sendCustomVideoEncData:(id)a0 width:(double)a1 height:(double)a2 frameType:(long long)a3;
- (void)setCustomVideoEncoderParam:(int)a0 width:(unsigned int)a1 height:(unsigned int)a2 fps:(int)a3 bitrate:(int)a4 minbitrate:(int)a5 gop:(int)a6;
- (void)onEnterMultiTalk:(id)a0;
- (void)onCreateMultiTalk:(id)a0;
- (void)onCancelCreateMultiTalk:(id)a0;
- (void)onInviteOrAcceptTimeout:(id)a0;
- (void)onReceiveMissMultiTalk:(id)a0;
- (void)onMemberChange:(id)a0;
- (void)onMemberChange:(id)a0 withNewJoinedMembers:(id)a1;
- (void)onMultiTalkReady;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMuteStateChange:(BOOL)a0;
- (void)OnVideoStateChange:(BOOL)a0 VideoOn:(BOOL)a1;
- (void)onErr:(int)a0 groupUserName:(id)a1;
- (void)onVideoData:(unsigned int)a0 Bgra:(char *)a1 Width:(unsigned int)a2 Height:(unsigned int)a3 frontCamera:(BOOL)a4 screenData:(BOOL)a5;
- (void)onSpeakerStateChange:(BOOL)a0;
- (void)onAddMultiTalkMemberResult:(BOOL)a0 errorType:(int)a1 groupInfo:(id)a2;
- (void)OnSysCallNotifyInterrupt:(int)a0;
- (void)onReceiveVideoMemberChangeMsg:(id)a0 extArray:(id)a1;
- (void)onReceiveSubscribeMemberChangeMsg:(int)a0;
- (void)onMultiTalkRedirectOk;
- (void)onOtherDeviceHandleTalk:(id)a0;
- (void)onMultiTalkBannerChange:(id)a0;
- (void)onMultiTalkJoinLimit:(unsigned int)a0;
- (void)onMultiTalkCreateLimit:(unsigned int)a0;
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)a0;
- (void)onSetMultiTalkScreenSharingStatus:(int)a0 ScreenSharingStatus:(int)a1;
- (void)startLocalAudio;
- (void)stopLocalAudio;
- (void)setHandsFree:(BOOL)a0;
- (void)muteLocalAudio:(BOOL)a0;
- (void)setAudioCaptureVolume:(long long)a0;
- (void)restartAudioDevice:(BOOL)a0;
- (void)sendTRTCRemoteAudioData:(char *)a0 length:(unsigned int)a1 channels:(unsigned int)a2 sampleRate:(unsigned int)a3;
- (void)OnAudioLocalProcessedData:(char *)a0 dataLen:(int)a1 channels:(int)a2 sampleRate:(int)a3;
- (void)setILinkAudioFrameDelegate:(id)a0;
- (void)updateLiveRemoteStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
