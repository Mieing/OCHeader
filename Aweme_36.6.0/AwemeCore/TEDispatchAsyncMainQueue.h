@class NSString, CADisplayLink;

@interface TEDispatchAsyncMainQueue : NSObject <TEDispatchAsyncQueueProtocol> {
    CADisplayLink *_displayLink;
}

@property (copy, nonatomic) id /* block */ displayCallbackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)displayLinkCallbackWithNoPlayerItem:(id)a0;
- (void)ready;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)run;

@end
