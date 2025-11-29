@protocol MMFinderLiveMinimizeWindowReporterDelegate;

@interface MMFinderLiveMinimizeWindowReporter : NSObject

@property (nonatomic) unsigned long long lastOpenType;
@property (nonatomic) unsigned long long minimizeStartTime;
@property (nonatomic) unsigned long long lastPauseTime;
@property (nonatomic) unsigned long long pauseDuration;
@property (weak, nonatomic) id<MMFinderLiveMinimizeWindowReporterDelegate> delegate;

- (void)reportForStartMinimizeWindowFrom:(unsigned long long)a0 sizeType:(unsigned long long)a1 liveType:(unsigned long long)a2;
- (void)reportForStopMinimizeWindowForLive:(unsigned long long)a0;
- (void)reportForCloseMinimizeWindow;
- (void)reportOnDismissLiveMinimizedWindowOverLiveVC;
- (void)reportOnMinimizeWindowPause;
- (void)reportOnMinimizeWindowResume;
- (void)reportAudioModeChangeToNextMode:(BOOL)a0;
- (unsigned long long)getLastEnterMode;
- (id)audienceLogReporter;
- (void)onMinimizeWindowPause;
- (void)onMinimizeWindowResume;
- (void)onAudioModeChangeToNextMode:(BOOL)a0;
- (void)clearLastDatas;
- (void).cxx_destruct;

@end
