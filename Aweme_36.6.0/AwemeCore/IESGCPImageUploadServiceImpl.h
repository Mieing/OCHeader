@class NSString, NSMutableDictionary;

@interface IESGCPImageUploadServiceImpl : NSObject <BDImageXUploadClientDelegate, IESGCPImageUploadService>

@property (retain, nonatomic) NSMutableDictionary *imageUploadTaskManger;
@property (retain, nonatomic) NSMutableDictionary *imageUploadClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (id)uploadErrorWithReason:(id)a0;
- (void)uploadWithRequest:(id)a0 singleImageCompletion:(id /* block */)a1 completion:(id /* block */)a2;
- (void)stopUpload;
- (long long)getMaxConcurrentFileNum:(long long)a0;
- (void)compressImageDatas:(id)a0 maxLength:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
