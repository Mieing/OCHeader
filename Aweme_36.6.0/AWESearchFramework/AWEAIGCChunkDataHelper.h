@class NSError, TTHttpResponse, NSData, TTHttpTask, CSPChunkDataMonitorRecord, NSDictionary, NSObject, NSMutableArray, NSMutableData, AWEAIGCServerEventDataModel, NSNumber;
@protocol AWEAIGCChunkDataReceiver, OS_dispatch_queue;

@interface AWEAIGCChunkDataHelper : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _receiverLock;
}

@property (weak, nonatomic) id<AWEAIGCChunkDataReceiver> receiver;
@property (retain, nonatomic) TTHttpTask *dataTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSMutableArray *chunksReceived;
@property (nonatomic) double numberOfBytesReceived;
@property (retain, nonatomic) NSMutableData *chunkBuffer;
@property (retain, nonatomic) NSMutableData *notEnoughBuffer;
@property (nonatomic) unsigned long long nextChunkLength;
@property (copy, nonatomic) NSData *endTagData;
@property (copy, nonatomic) NSData *splitTagData;
@property (nonatomic) BOOL isOccupied;
@property (nonatomic) BOOL forceStopFlag;
@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) TTHttpResponse *ttResponse;
@property (retain, nonatomic) CSPChunkDataMonitorRecord *monitorRecord;
@property (retain, nonatomic) AWEAIGCServerEventDataModel *dataModel;
@property (retain, nonatomic) NSDictionary *currentResponse;
@property (nonatomic) BOOL isNotFirstDataChunk;
@property (nonatomic) BOOL isNormalMode;
@property (readonly, nonatomic) BOOL forceStopped;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackOnQueue;
@property (nonatomic) BOOL highNetworkPriority;
@property (nonatomic) BOOL highThreadPriority;
@property (nonatomic) double defaultThreadPriority;
@property (nonatomic) BOOL highRequestMethodPriority;
@property (nonatomic) BOOL dataProcessAndCallbackSeparate;
@property (nonatomic) BOOL fixReceivingEOFEarly;
@property (nonatomic) BOOL fixBreakIllegalContent;
@property (retain, nonatomic) NSNumber *customProtectTimeout;
@property (retain, nonatomic) NSNumber *customHeaderReceiveTimeout;
@property (retain, nonatomic) NSNumber *customReadBodyTimeout;
@property (retain, nonatomic) Class requestSerializerClass;

- (id)initWithReceiver:(id)a0 monitorRecordClass:(Class)a1;
- (void)p_prepareForLink;
- (void)p_breakStream:(long long)a0;
- (void)p_clearCurrentBuffer;
- (void)forceBreakStream;
- (void)startStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 isRetry:(BOOL)a6;
- (id)initWithReceiver:(id)a0 monitorRecordClass:(Class)a1 isNormalMode:(BOOL)a2;
- (void)startStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 uploadBlock:(id /* block */)a6 isRetry:(BOOL)a7;
- (void)processEventData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReceiver:(id)a0;

@end
