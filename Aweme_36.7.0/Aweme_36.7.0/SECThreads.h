@class NSObject;
@protocol OS_dispatch_queue;

@interface SECThreads : NSObject {
    NSObject<OS_dispatch_queue> *_logQ;
    NSObject<OS_dispatch_queue> *_serialBackgroundQ;
}

+ (id)shared;

- (id)createLowQosQueueWithName:(id)a0;
- (void)asyncLog:(id /* block */)a0;
- (void)setupLogQueue;
- (void)setupSerialBackgroundLogQueue;
- (id)lowQosWorkQueue;
- (void).cxx_destruct;
- (id)logQueue;
- (id)init;

@end
