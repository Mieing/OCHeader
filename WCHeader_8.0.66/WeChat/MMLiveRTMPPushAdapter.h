@class NSString, TXLivePush;

@interface MMLiveRTMPPushAdapter : MMLivePushAdapter <TXLivePushListener>

@property (retain, nonatomic) TXLivePush *txLivePusher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPusher;
- (void)startPush:(id)a0;
- (void)updateAudioRecord:(BOOL)a0;
- (void)livePuserEnableBlackStream:(BOOL)a0;
- (void)stopPush;
- (void)startLocalAudio;
- (void)stopLocalAudio;
- (void)enterRoom;
- (void)exitRoom;
- (void)setVideoEncoderParam:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2;
- (void)setVideoMuted:(BOOL)a0;
- (void)setHEVCUsing:(BOOL)a0 forceMixing:(BOOL)a1;
- (void)enableBlackStream:(BOOL)a0;
- (void)doRtmpVideoQosChange;
- (void)setAudioMuted:(BOOL)a0;
- (BOOL)sendSEIMessage:(id)a0 repeatCount:(long long)a1;
- (void)sendSEIMessageData:(id)a0;
- (void)onLivePusherBGMStart:(long long)a0;
- (void)onLivePusherBGMProgress:(long long)a0 duration:(long long)a1;
- (void)onLivePusherBGMComplete:(long long)a0;
- (void)playLivePusherBgmOnMain:(id)a0;
- (void)liveManager:(id)a0 didPushVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 shouldReportCaptureMetrics:(BOOL)a2;
- (void)onPushEvent:(int)a0 withParam:(id)a1;
- (void)onNetStatus:(id)a0;
- (void).cxx_destruct;

@end
