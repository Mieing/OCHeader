@class NSString, NSThread, CADisplayLink;

@interface TEDispatchAsyncSubQueue : NSObject <TEDispatchAsyncQueueProtocol> {
    CADisplayLink *_displayLink;
    NSThread *_dispatchThread;
}

@property (copy, nonatomic) id /* block */ displayCallbackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)displayLinkCallbackWithNoPlayerItem:(id)a0;
- (void)dispatchThreadFunc:(id)a0;
- (void)ready;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)run;
- (void)dealloc;

@end
