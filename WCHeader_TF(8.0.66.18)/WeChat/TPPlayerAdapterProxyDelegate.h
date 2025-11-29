@class NSString, TPPlayerEventPublisher, TPPlayerAdapter;
@protocol ITPPlayerBaseDelegate;

@interface TPPlayerAdapterProxyDelegate : NSObject <ITPPlayerBaseDelegate>

@property (weak, nonatomic) id<ITPPlayerBaseDelegate> outerDelegate;
@property (retain, nonatomic) TPPlayerEventPublisher *publisher;
@property (retain, nonatomic) TPPlayerAdapter *playerAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPrepared:(id)a0;
- (void)onCompletion:(id)a0;
- (void)onPlayer:(id)a0 errorType:(long long)a1 errorCode:(long long)a2;
- (void)onPlayer:(id)a0 info:(unsigned long long)a1 extra1:(long long)a2 extra2:(long long)a3 extraObject:(id)a4;
- (void)onSeekComplete:(id)a0;
- (void)onVideoSizeChanged:(id)a0 width:(int)a1 height:(int)a2;
- (void)onPlayer:(id)a0 subtitleData:(id)a1;
- (void)onPlayer:(id)a0 videoFrameOut:(id)a1;
- (void)onPlayer:(id)a0 audioFrameOut:(id)a1;
- (id)onPlayer:(id)a0 videoProcessFrameOut:(id)a1;
- (id)onPlayer:(id)a0 audioProcessFrameOut:(id)a1;
- (void)onRetryStart:(id)a0;
- (void)onRetryEnd:(id)a0;
- (id)onPlayer:(id)a0 assembleAVAssetWithUrl:(id)a1 atIndex:(unsigned long long)a2;
- (void)onPlayer:(id)a0 airplayDidActive:(BOOL)a1;
- (void)onPlayer:(id)a0 airplayErrorDidOccur:(long long)a1;
- (void)onPlayer:(id)a0 pictureInPictureStateDidChange:(long long)a1;
- (void)onPlayer:(id)a0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)a1;
- (void)onPlayer:(id)a0 pictureInPictureErrorDidOccur:(long long)a1;
- (void)onPlayer:(id)a0 stateChangedWhenPictureInPictureActive:(unsigned long long)a1;
- (void)onPlayer:(id)a0 detailInfo:(id)a1;
- (void)onPlayer:(id)a0 drmInfo:(id)a1;
- (id)onSdpExchange:(id)a0 localSdp:(id)a1 ids:(int)a2;
- (void).cxx_destruct;

@end
