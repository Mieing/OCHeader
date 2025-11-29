@class NSMutableDictionary, JSContext, NSObject, NSMutableArray;

@interface WAJSNativeBufferBase : NSObject {
    unsigned int _bufferIDSequence;
    NSMutableDictionary *_dicID2Buffer;
    NSMutableDictionary *_dicBufferUrl;
}

@property (retain, nonatomic) NSMutableDictionary *mapArrayBuffer;
@property (retain, nonatomic) NSMutableArray *pendingJITResult;
@property (retain, nonatomic) NSObject *pendingJITResultLock;
@property (retain) JSContext *context;
@property BOOL useCompatibleModeConvertData;
@property unsigned int nativeBufferSizeLimit;
@property unsigned int nativeBufferQueueLimit;
@property (nonatomic) BOOL responseUseBase64;
@property (nonatomic) BOOL responseUseTextEncoder;

- (id)init;
- (id)getArrayBuffer:(unsigned int)a0;
- (void)injectWeiXinArrayBuffer:(id)a0;
- (void)removeNativeArrayBuffer:(int)a0;
- (id)insertNativeArrayBuffer:(int)a0 bufferId:(int *)a1;
- (id)insertNativeArrayBufferWithBuffer:(void *)a0 length:(unsigned long long)a1 permission:(unsigned long long)a2 dataRef:(id)a3;
- (void)setupWeixinSharedBuffer:(id)a0 workerId:(unsigned int)a1 buffers:(id)a2;
- (id)getSharedBuffers;
- (void)injectWeiXinNativeBuffer:(id)a0 isShared:(BOOL)a1 workerId:(unsigned int)a2;
- (void)setupSharedBufferExtention:(id)a0 workerId:(unsigned int)a1;
- (void)releaseLock:(id)a0 itemId:(unsigned int)a1;
- (BOOL)checkCanRead:(id)a0 workerId:(unsigned int)a1;
- (BOOL)checkCanWrite:(id)a0 workerId:(unsigned int)a1;
- (void)checkNextLock:(id)a0;
- (void)runNextItem:(id)a0;
- (id)addNativeBuffer:(id)a0;
- (id)addSharedBuffer:(void *)a0 length:(unsigned long long)a1;
- (void)executeOnWorker:(unsigned int)a0 invoker:(id)a1;
- (id)popNativeBuffer:(id)a0;
- (id)getBufferItem:(id)a0;
- (unsigned int)nativeBufferTotalSize;
- (id)nativeBufferParamSpecificKey;
- (id)parseInvokeHandlerNativeBufferParam:(id)a0 getError:(id *)a1;
- (id)parseNative2SdkNativeBufferParam:(id)a0 getError:(id *)a1 useBase64:(BOOL)a2;
- (void)appendJITResult:(id)a0 callbackID:(unsigned int)a1;
- (id)popPendingJITResults;
- (unsigned int)pendingJITResultCount;
- (id)packJITResult:(id)a0;
- (id)genBufferID;
- (id)createBufferObject:(struct OpaqueJSValue { } *)a0 context:(struct OpaqueJSContext { } *)a1;
- (BOOL)removeBufferObject:(id)a0 context:(struct OpaqueJSContext { } *)a1;
- (void *)getBufferFromObject:(id)a0 length:(long long *)a1;
- (id)createBufferObject:(id)a0;
- (void)removeBufferObject:(id)a0;
- (id)getDataFromObject:(id)a0;
- (void).cxx_destruct;

@end
