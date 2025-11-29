@class NSThread, NSString, MMStackReportConnection, MMCPUTimeProfiler;

@interface WCSilentTaskRunner : NSObject {
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_pThread;
}

@property (retain, nonatomic) NSThread *nsThread;
@property (nonatomic) unsigned int idleCount;
@property (retain, nonatomic) MMCPUTimeProfiler *cpuTimeProfiler;
@property (retain, nonatomic) MMStackReportConnection *stackReportConnection;
@property (nonatomic) BOOL enableStackReport;
@property (copy, nonatomic) NSString *name;

- (id)initWithName:(id)a0;
- (void)start;
- (void)routine;
- (double)normalizeSleepTime:(double)a0 floor:(double)a1 ceiling:(double)a2;
- (void)reportOverTimeEvent:(id)a0;
- (void).cxx_destruct;

@end
