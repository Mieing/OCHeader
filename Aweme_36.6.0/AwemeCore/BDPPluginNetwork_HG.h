@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface BDPPluginNetwork_HG : BDPBridgeInstancePlugin {
    NSRecursiveLock *_taskLock;
}

@property (nonatomic) long long lastestTaskID;
@property (retain, nonatomic) NSMutableDictionary *taskIdMapTask;
@property (nonatomic) BOOL isInterruption;
@property (copy, nonatomic) NSArray *validMethods;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL requestAddUniqueIDDisable;
@property (nonatomic) BOOL isUnity;

+ (void)logRequestResultWithType:(id)a0 duration:(unsigned long long)a1 metrics:(id)a2 error:(id)a3 reponse:(id)a4 uniqueID:(id)a5;

- (long long)sizeWithPath:(id)a0;
- (BOOL)callbackToDelegate;
- (void)abortWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createInnerRequestTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)getProfileForResponse:(id)a0;
- (void)uploadMD5WhenUploadImageDoneWithMD5String:(id)a0 name:(id)a1 uniqueID:(id)a2;
- (void)createRequestTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateRequestTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateInnerRequestTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createUploadTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateUploadTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createInnerUploadTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateInnerUploadTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createDownloadTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateDownloadTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createInnerDownloadTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateInnerDownloadTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createRequestTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2 isInnerRequest:(BOOL)a3 complete:(id /* block */)a4;
- (BOOL)canRequestForUniqueID:(id)a0 param:(id)a1;
- (id)convertRequestError:(id)a0;
- (void)handleParamEnableProfile:(id)a0 response:(id)a1 param:(id)a2;
- (void)subscribeHandlerToJSRuntimeIfNeed:(id)a0 event:(id)a1 pageID:(long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (double)getNetworkTimeoutWithParam:(id)a0 type:(id)a1 task:(id)a2;
- (void)handleOnHeaderReceived:(id)a0 taskIDKey:(id)a1 onStateChangeEventName:(id)a2 requestParam:(id)a3 taskID:(long long)a4;
- (void)handleParamRedirect:(id)a0 onStateChangeEventName:(id)a1 requestParam:(id)a2 param:(id)a3 taskID:(long long)a4;
- (void)uploadWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2 onStateChangeEventName:(id)a3 isInnerRequest:(BOOL)a4;
- (id)buildDownloadDataDic:(long long)a0 filePath:(id)a1 url:(id)a2 uniqueID:(id)a3 data:(id)a4 response:(id)a5 error:(id)a6;
- (long long)maxFileSizeForCommon:(id)a0;
- (id)getUserPathWithUniqueID:(id)a0;
- (void)sendOnHeaderReceived:(id)a0 taskIDKey:(id)a1 onStateChangeEventName:(id)a2 requestType:(long long)a3 taskID:(long long)a4 response:(id)a5;
- (void)subscribeHandlerToJSRuntime:(id)a0 event:(id)a1 pageID:(long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (void)didFinishCollectingMetricsWithURLSession:(id)a0 task:(id)a1 metrics:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
