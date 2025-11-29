@class TTTrackerContext, IRISExternalHandler, IRISDataPriorityManager, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TTTrackerPriority : NSObject {
    NSObject<OS_dispatch_queue> *priorityQueue;
    void *priorityQueueTag;
    NSObject<OS_dispatch_queue> *global_timer_queue;
    NSObject<OS_dispatch_source> *global_timer;
    unsigned long long timer_duration;
    unsigned long long latestDump;
}

@property (retain, nonatomic) IRISDataPriorityManager *manager;
@property (retain, nonatomic) TTTrackerContext *context;
@property (retain, nonatomic) IRISExternalHandler *handler;

- (void)onResponse:(id)a0;
- (void)trigger:(unsigned long long)a0;
- (BOOL)handleEvent:(id)a0 forType:(id)a1 options:(id)a2;
- (id)defaultEndpoint:(unsigned long long)a0;
- (BOOL)isUserBlockUpload:(unsigned long long)a0;
- (void)onError:(id)a0 caller:(id)a1;
- (id)basicHTTPBody:(id)a0 options:(id)a1;
- (void)syncRequest:(id)a0 completion:(id /* block */)a1;
- (id)convertMechanismLevelToEventPriority:(long long)a0;
- (id)exportHTTPHeaderFields;
- (void)_monitorUploadResult:(BOOL)a0 requestInfo:(id)a1 logId:(id)a2;
- (id)exportContentHeader;
- (id)exportDefaultOptions;
- (id)_priorityOptions:(id)a0;
- (id)executionQueue;
- (void)async:(id /* block */)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (unsigned long long)eventCount;
- (void)startTimer;
- (id)storage;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)commonInit;
- (void)start;
- (void)removeAllEvents;
- (id)featureOptions;
- (void)sessionUpdated:(id)a0;

@end
