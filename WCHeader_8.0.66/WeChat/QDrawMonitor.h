@class NSThread, NSTimer;

@interface QDrawMonitor : NSObject

@property (nonatomic) unsigned long long logid;
@property (nonatomic) double initTimeStamp;
@property (nonatomic) double beforeTimeStamp;
@property (nonatomic) double afterTimeStamp;
@property (retain, nonatomic) NSThread *monitorThread;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL exitThread;

- (id)init;
- (void)stop;
- (void)doStopThread;
- (void)onBeforeDrawframe;
- (void)preReportBefore:(id)a0;
- (void)doPreReport:(id)a0;
- (void)onAfterDrawframeWithBlock:(id /* block */)a0;
- (void)reportAfter:(id)a0;
- (void)threadStart:(id)a0;
- (void)increaseLogid;
- (void).cxx_destruct;

@end
