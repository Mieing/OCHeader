@class NSRecursiveLock, NSArray, NSMutableDictionary, BDPCloudSidIG;

@interface BDPPluginNetworkIG : BDPBridgeInstancePlugin {
    NSRecursiveLock *_taskLock;
    NSRecursiveLock *_cloudTaskLock;
}

@property (nonatomic) long long lastestTaskID;
@property (retain, nonatomic) NSMutableDictionary *taskIdMapTask;
@property (retain, nonatomic) NSMutableDictionary *cloudTaskIdMapTask;
@property (copy, nonatomic) NSArray *validMethods;
@property (retain, nonatomic) BDPCloudSidIG *cloudSid;
@property (nonatomic) BOOL recordFirstRequest;

+ (id)handleCloudServiceRequest:(id)a0 unique:(id)a1;

- (void)removeTaskId:(long long)a0;
- (void)processResponse:(id)a0 URL:(id)a1 uniqueID:(id)a2;
- (void)requestWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2 onStateChangeEventName:(id)a3 isInnerRequest:(BOOL)a4;
- (void)abortWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createInnerRequestTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (id)errMsgForAuthorizeResult:(long long)a0 url:(id)a1 uniqueId:(id)a2;
- (long long)errorCodeForAuthorizeResult:(long long)a0;
- (BOOL)needAppendCookie:(id)a0;
- (id)getNetworkInfoWithResponse:(id)a0;
- (id)generateNewErrorInfo:(id)a0;
- (id)getProfileForResponse:(id)a0;
- (id)getTimelineProfileForResponse:(id)a0;
- (void)setTask:(id)a0 forId:(long long)a1;
- (void)callbackError:(id /* block */)a0 appTask:(id)a1 onStateChangeEventName:(id)a2 error:(id)a3;
- (id)getMultiRequestBodyWithFilePath:(id)a0 withParam:(id)a1;
- (void)uploadMD5WhenUploadImageDoneWithMD5String:(id)a0 name:(id)a1 uniqueID:(id)a2;
- (id)getMimeTypeWithFilePath:(id)a0;
- (id)taskForId:(long long)a0;
- (id)generateCloudRequestParamWithParam:(id)a0 header:(id)a1 instance:(id)a2 url:(id)a3 method:(long long)a4 from:(id)a5 type:(long long)a6;
- (id)generateNetworkResponseError:(id)a0 preSigned:(BOOL)a1;
- (BOOL)checkPreSignedResponseStatusWithParam:(id)a0 data:(id)a1 response:(id)a2 error:(id)a3 callback:(id /* block */)a4 type:(id)a5;
- (void)cloudUploadFileWithPreSignedData:(id)a0 param:(id)a1 callback:(id /* block */)a2 instance:(id)a3;
- (void)_requestPreSignedServiceWithParam:(id)a0 sid:(id)a1 action:(id)a2 completionHandler:(id /* block */)a3 instance:(id)a4;
- (void)preCheckBeforeCloudFileOperateWithInstance:(id)a0 callback:(id /* block */)a1 completion:(id /* block */)a2;
- (void)removeCloudTaskId:(long long)a0;
- (void)setCloudTask:(id)a0 forId:(long long)a1;
- (void)cloudDownloadFileWithPreSignedData:(id)a0 param:(id)a1 callback:(id /* block */)a2 instance:(id)a3;
- (void)_requestInnerGatewayWithParam:(id)a0 sid:(id)a1 callback:(id /* block */)a2 instance:(id)a3;
- (id)defaultSchemaSupportList:(id)a0;
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
- (void)callContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)cloudUploadFileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)cloudDownloadFileWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)createInnerGatewayRequestWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_requestServiceWithParam:(id)a0 sid:(id)a1 callback:(id /* block */)a2 instance:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
