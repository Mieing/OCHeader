@class NSTimer, BDPTask, NSString;

@interface BDPHighPerformanceGameMonitor : NSObject <BDPBusinessMonitorProtocol>

@property (retain, nonatomic) NSTimer *collectTimer;
@property (weak, nonatomic) BDPTask *task;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) id /* block */ flushAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidTimer;
- (void)flushMonitor;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
