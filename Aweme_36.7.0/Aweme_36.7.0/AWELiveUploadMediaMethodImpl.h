@class NSObject, NSString, BDImageUploaderClient, AWELiveUploadMediaParamModel, NSMutableArray, BDVideoUploaderClient;
@protocol OS_dispatch_queue;

@interface AWELiveUploadMediaMethodImpl : AWELiveUploadMediaMethod <BDVideoUploadClientDelegate, BDImageUploadClientDelegate>

@property (retain, nonatomic) AWELiveUploadMediaParamModel *param;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) BDVideoUploaderClient *videoUploader;
@property (retain, nonatomic) BDImageUploaderClient *imageUploader;
@property (retain, nonatomic) NSMutableArray *imageResultList;
@property (retain, nonatomic) NSMutableArray *imageUploadProgressArray;
@property (nonatomic) long long uploadImageCounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property BOOL isInUploading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)imageUploadDidFinish:(id)a0;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (long long)imageUploadGetNetState:(id)a0;
- (void)uploadMediaByBDVideoUploaderWithParam:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadMediaByBDImageUploaderWithParam:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadMediaByTTNetWithParam:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopImageUpload;
- (void).cxx_destruct;

@end
