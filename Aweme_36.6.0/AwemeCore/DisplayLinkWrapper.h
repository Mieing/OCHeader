@class CADisplayLink;

@interface DisplayLinkWrapper : NSObject {
    CADisplayLink *_displayLink;
}

@property (readonly, nonatomic) long long preferredFramesPerSecond;
@property (readonly, copy, nonatomic) id /* block */ tickBlock;
@property (nonatomic, getter=isPaused) BOOL paused;

- (void)handleDisplayLink;
- (id)initWithPreferredFramesPerSecond:(long long)a0 tickBlock:(id /* block */)a1;
- (void)destroyDisplayLink;
- (void).cxx_destruct;
- (void)setupDisplayLink;

@end
