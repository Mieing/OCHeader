@class CADisplayLink;

@interface DDanmakuClock : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double previousTime;
@property (copy, nonatomic) id /* block */ callBack;
@property (nonatomic) double speedFactor;
@property (nonatomic) long long preferredFramesPerSecond;

- (void)displayLinkDidTriggered:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)invalidate;
- (void)resume;
- (id)initWithCallBack:(id /* block */)a0;

@end
