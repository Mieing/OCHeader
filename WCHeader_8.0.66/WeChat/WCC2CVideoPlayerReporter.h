@class OrderedDictionary, HDImageExpireReporter, CMessageWrap;

@interface WCC2CVideoPlayerReporter : NSObject

@property (nonatomic) unsigned int reportID;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) float currentPlayRate;
@property (nonatomic) unsigned long long enterTimestamp;
@property (nonatomic) unsigned long long lastRecordTimestamp;
@property (retain, nonatomic) OrderedDictionary *playRateDuration;
@property (nonatomic) unsigned long long didPlayRealTime;
@property (nonatomic) unsigned long long didPlayVideoTime;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (nonatomic) unsigned int totalTime;
@property (retain, nonatomic) HDImageExpireReporter *imageExpireReporter;

- (id)init;
- (id)commonReportInfo;
- (void)onVideoAreaClicked:(BOOL)a0;
- (void)onPlayButtonClicked:(BOOL)a0;
- (void)onControlAreaClicked:(BOOL)a0;
- (void)onPlayRateChangeFrom:(float)a0 toRate:(float)a1;
- (void)onProgressBarDrag:(BOOL)a0;
- (void)onEnterVideoPlayerView;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onLeaveVideoPlayerView;
- (void).cxx_destruct;

@end
