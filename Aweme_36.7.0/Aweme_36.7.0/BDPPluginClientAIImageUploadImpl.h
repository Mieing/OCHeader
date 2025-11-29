@class NSString, BDPThreadSafeDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BDPPluginClientAIImageUploadImpl : NSObject <BDPClientAIImageUploadPluginDelegate, BDImageXUploadClientDelegate> {
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_uploadQueue;
    BDPThreadSafeDictionary *_uploadingOperations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (void)bdp_uploadShotImage:(id)a0 appID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_uploadShotImage:(id)a0 appID:(id)a1 imageURI:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
