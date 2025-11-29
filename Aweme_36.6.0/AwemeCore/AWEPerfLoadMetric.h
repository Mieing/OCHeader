@class AWEPerfSession, NSString, AWEPerfLoadVC, AWEPerfLoadObject, AWEPerfLoadTrace;

@interface AWEPerfLoadMetric : NSObject <AWEPerfMetric> {
    struct atomic_flag { _Atomic BOOL _Value; } finishOnce;
    struct atomic_flag { _Atomic BOOL _Value; } startOnce;
    AWEPerfLoadTrace *_trace;
    AWEPerfLoadVC *_loadVC;
    AWEPerfLoadObject *_loadTimeout;
    id /* block */ _traceBuilder;
    id /* block */ _rehandleExtraBlock;
}

@property (class, readonly, nonatomic) NSString *kind;

@property (nonatomic) BOOL ttiEnabled;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double baseTime;
@property (readonly, nonatomic) AWEPerfLoadTrace *trace;
@property (nonatomic) AWEPerfSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricWithTrace:(id /* block */)a0;
+ (BOOL)isEnabled;
+ (id)metric;

- (void)setupWithTrace:(id)a0;
- (void)startTrackWithVC:(id)a0;
- (void)onAppWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)finishWithResult:(long long)a0;

@end
