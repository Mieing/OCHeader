@interface IESLiveIMPaaSProxy : NSObject

+ (id)sharedInstance;

- (id)completeWorkerWith:(id)a0;
- (id)workerWith:(id)a0;
- (id)clientWith:(id)a0;
- (id)dispatcherWith:(id)a0;
- (id)wrdsManagerWith:(id)a0;

@end
