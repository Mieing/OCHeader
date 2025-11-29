@class IESLiveLinkRTCEngineManager, IESLiveLinkMultiCaster, NSString;

@interface IESLiveLinkPublicStreamManager : NSObject <ByteRTCWTNStreamDelegate, IESLiveLinkPublicStream> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) IESLiveLinkRTCEngineManager *engineManager;
@property (retain, nonatomic) IESLiveLinkMultiCaster *observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)startPlayPublicStream:(id)a0;
- (int)stopPlayPublicStream:(id)a0;
- (int)setPublicStreamVideoCanvas:(id)a0 withCanvas:(id)a1;
- (int)setPublicStreamAudioPlaybackVolume:(id)a0 volume:(long long)a1;
- (int)startPushPublicStream:(id)a0 withLayout:(id)a1;
- (int)stopPushPublicStream:(id)a0;
- (id)initWithEngineManager:(id)a0;
- (void)onWTNDataMessageReceived:(id)a0 andMessage:(id)a1 andSourceType:(long long)a2;
- (void)onWTNFirstRemoteAudioFrame:(id)a0;
- (void)onWTNFirstRemoteVideoFrameDecoded:(id)a0 withFrameInfo:(id)a1;
- (void)onWTNPlayStateChanged:(id)a0 oldState:(long long)a1 newState:(long long)a2 reason:(long long)a3 elapse:(long long)a4;
- (void)onWTNPushStateChanged:(id)a0 oldState:(long long)a1 newState:(long long)a2 reason:(long long)a3 elapse:(long long)a4;
- (void)onWTNRemoteAudioStateChanged:(id)a0 state:(long long)a1 reason:(long long)a2;
- (void)onWTNRemoteAudioStats:(id)a0 audioStats:(id)a1;
- (void)onWTNRemoteVideoStateChanged:(id)a0 state:(long long)a1 reason:(long long)a2;
- (void)onWTNRemoteVideoStats:(id)a0 videoStats:(id)a1;
- (void)onWTNSEIMessageReceived:(id)a0 andChannelId:(int)a1 andMessage:(id)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
