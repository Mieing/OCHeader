@class NSString, MMFinderLiveTaskId;

@interface WCFinderLivePlayerViewReporter : NSObject

@property (retain, nonatomic) NSString *playId;
@property (retain, nonatomic) NSString *playUrl;
@property (nonatomic) unsigned long long videoDuration;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;

- (id)initWithTaskId:(id)a0;
- (void)onPlayerStartPlay:(id)a0 videoExpectPlayTime:(unsigned long long)a1 videoDuration:(unsigned long long)a2 playUrl:(id)a3;
- (void)onPlayerPauseForLoading:(unsigned long long)a0 seekTime:(double)a1;
- (void)onPlayerResumeForLoaded:(unsigned long long)a0 seekTime:(double)a1;
- (void)onPlayerPlayFinishSeekTime:(double)a0;
- (void)onPlayerPlayFailed:(unsigned int)a0 seekTime:(double)a1;
- (id)updateExtInfo:(double)a0 errCode:(unsigned int)a1 playUrl:(id)a2;
- (void)reportLivePlayerViewReport:(unsigned long long)a0 params:(id)a1;
- (void).cxx_destruct;

@end
