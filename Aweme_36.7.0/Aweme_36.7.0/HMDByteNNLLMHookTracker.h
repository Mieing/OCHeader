@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDByteNNLLMHookTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *queueStore;
@property (retain, nonatomic) NSMutableDictionary *modelNameDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;

+ (void)callByteNNHookWithUUID:(id)a0 node:(id)a1 paramsConverter:(id /* block */)a2;
+ (id)sharedTracker;

- (void)enqueueData:(id)a0 forUUID:(id)a1;
- (id)dequeueDataForUUID:(id)a0;
- (id)calculateDeltaFromStart:(id)a0 end:(id)a1 key:(id)a2;
- (id)storeCurrentData;
- (void)trackByteNNLLMService:(id)a0;
- (void)writeByteNNAlog:(id)a0 hookNode:(id)a1 dictionaryInfo:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
