@class NSString, NSMutableSet, NSObject;
@protocol V2TXLivePusherObserverWx, OS_dispatch_semaphore;

@interface V2TXLivePusherWx : V2TXLivePusher <V2TXLivePusherObserverWx> {
    unsigned long long _mode;
    long long _networkQuality;
    NSMutableSet *_mainStreamUserList;
    NSMutableSet *_subStreamUserList;
    id<V2TXLivePusherObserverWx> _observer;
    NSObject<OS_dispatch_semaphore> *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)log:(id)a0 isOnline:(BOOL)a1;

- (id)initWithLiveMode:(unsigned long long)a0;
- (void)setObserver:(id)a0;
- (long long)startPush:(id)a0;
- (void)onError:(long long)a0 message:(id)a1 extraInfo:(id)a2;
- (void)onWarning:(long long)a0 message:(id)a1 extraInfo:(id)a2;
- (void)onCaptureFirstAudioFrame;
- (void)onCaptureFirstVideoFrame;
- (void)onMicrophoneVolumeUpdate:(long long)a0;
- (void)onPushStatusUpdate:(long long)a0 message:(id)a1 extraInfo:(id)a2;
- (void)onStatisticsUpdate:(id)a0;
- (void)onSnapshotComplete:(id)a0;
- (void)onProcessVideoFrame:(id)a0 dstFrame:(id)a1;
- (void)onGLContextDestroyed;
- (void)onSetMixTranscodingConfig:(long long)a0 message:(id)a1;
- (void)onPushEvent:(long long)a0 param:(id)a1;
- (void)onPushNetStatus:(id)a0;
- (void)onEnterRoom:(long long)a0;
- (void)onExitRoom:(long long)a0;
- (void)onRemoteUserEnter:(id)a0;
- (void)onRemoteUserExit:(id)a0 reason:(long long)a1;
- (void)onUserVideoAvailable:(id)a0 streamType:(long long)a1 available:(BOOL)a2;
- (void)onUserAudioAvailable:(id)a0 available:(BOOL)a1;
- (void)onNetworkQuality:(long long)a0;
- (unsigned long long)getURLModeWithURL:(id)a0;
- (BOOL)isRTC;
- (id)getJSONStrForUserList:(id)a0;
- (id)getPlayUrl:(id)a0 streamType:(long long)a1;
- (id)streamTypeConvert:(long long)a0;
- (void)notifyFullUserList;
- (void)sendEventNotify:(long long)a0 param:(id)a1;
- (void)sendEventNotify:(long long)a0 msg:(id)a1;
- (void).cxx_destruct;

@end
