@class NSObject;
@protocol OS_dispatch_semaphore;

@interface OSCPingThread : NSThread

@property BOOL pingTaskIsRunning;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly, nonatomic) double threshold;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)initWithThreashold:(double)a0 handler:(id /* block */)a1;
- (void)main;
- (void).cxx_destruct;

@end
