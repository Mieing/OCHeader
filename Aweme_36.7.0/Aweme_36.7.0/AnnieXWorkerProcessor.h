@class AnnieXWorker, NSString, NSArray;

@interface AnnieXWorkerProcessor : NSObject <AnnieXWorkerDelegate>

@property (retain, nonatomic) AnnieXWorker *worker;
@property (copy, nonatomic) NSString *workerId;
@property (copy, nonatomic) NSArray *delegateList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWorker:(id)a0 receiveMessage:(id)a1;
- (void)onWorker:(id)a0 receiveError:(id)a1;
- (void)evaluateJsString:(id)a0;
- (void)terminate;
- (void).cxx_destruct;
- (id)init;
- (void)postMessage:(id)a0;

@end
