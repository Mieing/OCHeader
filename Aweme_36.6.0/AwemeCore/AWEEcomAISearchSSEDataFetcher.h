@class NSNumber, NSDictionary, AWEEcomAISearchSSEDataModel, NSError, TTHttpTask, NSObject;
@protocol OS_dispatch_queue, AWEEcomAISearchSSEDataReceiver;

@interface AWEEcomAISearchSSEDataFetcher : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _receiverLock;
}

@property (weak, nonatomic) id<AWEEcomAISearchSSEDataReceiver> receiver;
@property (retain, nonatomic) TTHttpTask *dataTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSError *lastError;
@property (copy, nonatomic) NSDictionary *currentResponse;
@property (retain, nonatomic) AWEEcomAISearchSSEDataModel *dataModel;
@property (nonatomic) BOOL isOccupied;
@property (nonatomic) BOOL forceStopFlag;
@property (nonatomic) BOOL isNotFirstDataChunk;
@property (readonly, nonatomic) BOOL forceStopped;
@property (nonatomic) BOOL highNetworkPriority;
@property (nonatomic) BOOL highThreadPriority;
@property (nonatomic) BOOL highRequestMethodPriority;
@property (nonatomic) BOOL dataProcessAndCallbackSeparate;
@property (retain, nonatomic) NSNumber *customProtectTimeout;
@property (retain, nonatomic) NSNumber *customHeaderReceiveTimeout;
@property (retain, nonatomic) NSNumber *customReadBodyTimeout;

- (void)p_prepareForLink;
- (void)p_breakStream:(long long)a0;
- (void)forceBreakStream;
- (void)p_executeCallback:(id /* block */)a0;
- (void)p_processEventData:(id)a0;
- (void)p_processLine:(id)a0 withDataModel:(id)a1;
- (void)p_logForDataModel:(id)a0;
- (void)p_sendChunkData:(id)a0;
- (void)startStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 isRetry:(BOOL)a6;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReceiver:(id)a0;

@end
