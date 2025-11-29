@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface MegaVideoPlayerCallbackApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onErrorPlayerId:(long long)a0 mediaId:(id)a1 errorMsg:(id)a2 what:(long long)a3 extra:(long long)a4 completion:(id /* block */)a5;
- (void)onPreparedPlayerId:(long long)a0 mediaId:(id)a1 completion:(id /* block */)a2;
- (void)onPlayStartPlayerId:(long long)a0 mediaId:(id)a1 completion:(id /* block */)a2;
- (void)onPlayPausePlayerId:(long long)a0 mediaId:(id)a1 completion:(id /* block */)a2;
- (void)onPlayEndPlayerId:(long long)a0 mediaId:(id)a1 completion:(id /* block */)a2;
- (void)onBufferStartPlayerId:(long long)a0 mediaId:(id)a1 isSeeking:(BOOL)a2 completion:(id /* block */)a3;
- (void)onBufferEndPlayerId:(long long)a0 mediaId:(id)a1 completion:(id /* block */)a2;
- (void)onVideoFirstFrameDrawPlayerId:(long long)a0 mediaId:(id)a1 completion:(id /* block */)a2;
- (void)onGetVideoSizePlayerId:(long long)a0 mediaId:(id)a1 width:(long long)a2 height:(long long)a3 completion:(id /* block */)a4;
- (void)onGetVideoPlayFpsPlayerId:(long long)a0 mediaId:(id)a1 videoFps:(long long)a2 decodeFps:(long long)a3 renderFps:(long long)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
