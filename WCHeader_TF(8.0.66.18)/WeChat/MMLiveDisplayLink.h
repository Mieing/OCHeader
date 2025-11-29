@class CADisplayLink;

@interface MMLiveDisplayLink : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) long long framesPerSecond;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)invalidate;
- (void)update:(id)a0;
- (void).cxx_destruct;

@end
