@class NSMutableDictionary;

@interface IESECTabKitTaskController : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskMap;

- (void)commitTask:(id /* block */)a0 flag:(id)a1;
- (void)invokeTaskWithFlag:(id)a0;
- (id)taskQueueForFlag:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
