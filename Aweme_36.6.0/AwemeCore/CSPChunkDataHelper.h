@class NSError, NSString, NSData, TTHttpResponse, TTHttpTask, CSPCommonRequestInfoModel, CSPChunkDataMonitorRecord, TTHttpRequest, NSObject, NSMutableArray, NSMutableData, NSNumber;
@protocol CSPCommonRequestInfo, CSPThreadBlockMonitorProtocol, OS_dispatch_queue, CSPChunkDataReceiver;

@interface CSPChunkDataHelper : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _receiverLock;
}

@property (weak, nonatomic) id<CSPChunkDataReceiver> receiver;
@property (retain, nonatomic) TTHttpTask *dataTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned long long status;
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
@property (copy, nonatomic) NSString *lastLogId;
@property (copy, nonatomic) NSString *lastTTTraceId;
@property (retain, nonatomic) TTHttpResponse *ttResponse;
@property (retain) CSPCommonRequestInfoModel *requestInfoModel;
@property (retain, nonatomic) CSPChunkDataMonitorRecord *monitorRecord;
@property (weak, nonatomic) id<CSPThreadBlockMonitorProtocol> threadBlockMonitor;
@property (readonly, nonatomic) BOOL forceStopped;
@property (readonly, nonatomic) TTHttpRequest *ttRequest;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackOnQueue;
@property (readonly) id<CSPCommonRequestInfo> requestInfo;
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
- (id)customEndTag;
- (id)customSplitTag;
- (void)startStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 uploadBlock:(id /* block */)a6;
- (void)p_prepareForLink;
- (void)p_startFlowRead;
- (void)p_breakStream:(long long)a0;
- (void)p_handleFlowRead;
- (BOOL)p_handleData:(id)a0;
- (void)p_sendError:(long long)a0 error:(id)a1 extraLog:(id)a2;
- (unsigned int)customDecodeChunkLengthFromString:(id)a0;
- (BOOL)customRawDataCallbackMode;
- (void)p_clearCurrentBuffer;
- (void)setupDataQueue:(id)a0;
- (void)startStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5;
- (void)forceBreakStream;
- (void)registerThreadBlockMonitor:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReceiver:(id)a0;

@end
