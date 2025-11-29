@class NSDate;

@interface AWECloudAlbumCostTimer : NSObject

@property (nonatomic) double total;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isPausedManually) BOOL pausedManually;

- (void)didBecomeActiveNotification:(id)a0;
- (void)didEnterBackgroundNotification:(id)a0;
- (void)p_pauseManually:(BOOL)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (long long)duration;
- (void)start;
- (void)resume;
- (void)dealloc;

@end
