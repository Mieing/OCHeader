@class JITRuntimeNativeBufferMgr, NSMutableDictionary, JITRuntime, NSObject, NSMutableArray;
@protocol JITRuntimeJsApiHandlerDelegate;

@interface JITRuntimeJsApiHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *jsApiCallBackResult;
@property (retain, nonatomic) NSMutableDictionary *jsApiUseBase64;
@property (retain, nonatomic) NSMutableArray *pendingJITResult;
@property (retain, nonatomic) NSMutableArray *pendingJITEvent;
@property (retain, nonatomic) NSObject *pendingJITResultLock;
@property (nonatomic) unsigned long long jitLastNotifyCallbackTimeInMs;
@property (nonatomic) unsigned long long jitLastNotifyEventTimeInMs;
@property (nonatomic) BOOL hasPendingNotifyCallbackCheck;
@property (nonatomic) BOOL hasPendingNotifyEventCheck;
@property (weak, nonatomic) id<JITRuntimeJsApiHandlerDelegate> delegate;
@property (weak, nonatomic) JITRuntime *runtime;
@property (retain, nonatomic) JITRuntimeNativeBufferMgr *nativeBufferMgr;
@property (retain, nonatomic) NSMutableDictionary *commandBufferBuffers;
@property (nonatomic) BOOL useXHRTransferJSEvent;
@property (retain, nonatomic) NSMutableDictionary *innerApiPool;
@property (retain, nonatomic) NSMutableDictionary *asyncHandlerDict;

- (void)innerProcessJsApiCommandBuffer:(id)a0;
- (id)innerProcessJsApiCommandBuffer:(id)a0 data:(id)a1 workerId:(unsigned int)a2;
- (id)processJsApiCommandBuffer:(const char *)a0 useBase64:(BOOL)a1 workerId:(unsigned int)a2;
- (id)processInvokeHandler:(id)a0 eventId:(int)a1 dicParam:(id)a2 useBase64:(BOOL)a3;
- (unsigned int)processArrayBuffer:(id)a0 fromEncode:(BOOL)a1;
- (void)initInnerApi;
- (BOOL)processInnerJsApi:(id)a0 param:(id)a1 callbackId:(unsigned int)a2;
- (id)init;
- (id)processJsApi:(id)a0 param:(id)a1 callbackId:(unsigned int)a2;
- (void)processJsApiXHRCommandBuffer:(id)a0;
- (void)processJsApiCommandBuffer:(id)a0;
- (void)invokeJsApiCallback:(unsigned int)a0 result:(id)a1 workerId:(unsigned int)a2 completion:(id /* block */)a3;
- (void)realInvokeJsApiCallback:(unsigned int)a0 result:(id)a1 workerId:(unsigned int)a2 completion:(id /* block */)a3;
- (void)invokeJsApiCallback:(unsigned int)a0 result:(id)a1 useBase64:(BOOL)a2 workerId:(unsigned int)a3 completion:(id /* block */)a4;
- (void)checkNotifyCallback;
- (id)getJsApiErrorReuslt:(id)a0 msg:(id)a1;
- (id)processJsApi:(id)a0 param:(id)a1 callbackId:(unsigned int)a2 useBase64:(BOOL)a3;
- (void)sendJSEvent:(id)a0;
- (void)innerSendJSEvent:(id)a0;
- (void)checkBatchSendJSEvent;
- (void)sendErrorEvent:(id)a0 workerId:(unsigned int)a1;
- (void)pauseAsyncFlush;
- (void)resumeAsyncFlush;
- (id)convertNativeNestedBuffers:(id)a0 useBase64:(BOOL)a1;
- (id)convertNativeParamsToJsApiResult:(id)a0 getError:(id *)a1 useBase64:(BOOL)a2;
- (id)parseNestedBuffers:(id)a0 useBase64:(BOOL)a1;
- (id)parseJsApiNativeBufferParams:(id)a0 getError:(id *)a1 useBase64:(BOOL)a2;
- (void)appendJITResult:(id)a0 callbackID:(unsigned int)a1 workerId:(unsigned int)a2;
- (id)popPendingJITResults;
- (id)popPendingPureStringJITResults;
- (unsigned int)pendingJITResultCount;
- (id)convertNestedBuffers:(id)a0 allArrayBuffer:(id)a1 arrayBufferMetaArray:(id)a2 bufferLength:(long long *)a3;
- (id)packJITResult:(id)a0;
- (void).cxx_destruct;

@end
