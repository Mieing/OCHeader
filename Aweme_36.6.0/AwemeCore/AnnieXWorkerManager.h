@class AnnieXWorkerProcessor;

@interface AnnieXWorkerManager : NSObject

@property (retain, nonatomic) AnnieXWorkerProcessor *processor;

+ (id)shareInstance;

- (void)setupWorker;
- (void)setupEventSubscriber;
- (void).cxx_destruct;
- (void)postMessage:(id)a0;

@end
