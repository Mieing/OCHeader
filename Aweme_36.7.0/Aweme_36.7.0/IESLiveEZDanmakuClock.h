@class CADisplayLink;

@interface IESLiveEZDanmakuClock : NSObject {
    CADisplayLink *_displayLink;
    id /* block */ _updater;
    unsigned long long _clockState;
    double _lastTimeDate;
    double _time;
    double _pausingSpeed;
}

@property (nonatomic) double speed;
@property (readonly, nonatomic) double currentTime;

+ (id)danmakuClockWithUpdater:(id /* block */)a0;

- (void)p_refresh;
- (void)p_reset;
- (id)initWithUpdater:(id /* block */)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)resume;
- (void)dealloc;
- (void)end;

@end
