@interface WCFinderLiveReplayPreviewPlayerControlView : WCPlayerControlView

@property (nonatomic) BOOL startLoaded;
@property (copy, nonatomic) id /* block */ seekEndCallback;
@property (copy, nonatomic) id /* block */ startLoadedCompletion;
@property (copy, nonatomic) id /* block */ prepareToPlayCallback;
@property (copy, nonatomic) id /* block */ videoSizeChangeCallback;
@property (copy, nonatomic) id /* block */ onReceiveAllDataCallback;

- (void)onPlayerSeekCompelete:(double)a0;
- (void)onPlayerSeekFail:(float)a0;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void)onPlayerStateChanged:(unsigned long long)a0;
- (void)onPlayerCreated;
- (void)onPlayerProcessStateChanged:(unsigned long long)a0;
- (void)onDownloadProgressChange:(id)a0 finishLength:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)onVideoSizeChange:(struct CGSize { double x0; double x1; })a0;
- (void)onReceiveAllVideoData:(id)a0;
- (void)onStartLoadedChanged;
- (void).cxx_destruct;

@end
