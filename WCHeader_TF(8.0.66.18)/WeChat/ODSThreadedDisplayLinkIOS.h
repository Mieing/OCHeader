@class CADisplayLink;

@interface ODSThreadedDisplayLinkIOS : NSObject {
    BOOL _isStarted;
    CADisplayLink *_displayLink;
    void *_owner;
}

@property (nonatomic) long long preferredFramesPerSecond;

- (id)initWithOwner:(void *)a0;
- (void)start;
- (void)stop;
- (void)refresh;
- (void).cxx_destruct;

@end
