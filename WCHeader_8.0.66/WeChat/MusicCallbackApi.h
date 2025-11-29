@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface MusicCallbackApi : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onEndedPlayInfo:(id)a0 completion:(id /* block */)a1;
- (void)onStopPlayInfo:(id)a0 completion:(id /* block */)a1;
- (void)onPausePlayInfo:(id)a0 completion:(id /* block */)a1;
- (void)onStartPlayInfo:(id)a0 completion:(id /* block */)a1;
- (void)onResumePlayInfo:(id)a0 completion:(id /* block */)a1;
- (void)onSeekingInfo:(id)a0 completion:(id /* block */)a1;
- (void)onSeekedInfo:(id)a0 completion:(id /* block */)a1;
- (void)onPlayProgressChangedPosition:(double)a0 totalDuration:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
