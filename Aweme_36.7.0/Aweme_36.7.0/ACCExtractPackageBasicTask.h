@class NSString, ACCExtractCache, NSObject;
@protocol OS_dispatch_queue, ACCFileUploadServiceProtocol;

@interface ACCExtractPackageBasicTask : NSObject <ACCUserServiceMessage, ACCExtractPackageTaskProtocol>

@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadFrameService;
@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadFeatureService;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL cancelled;
@property (copy, nonatomic) NSString *extractFolderPath;
@property (weak, nonatomic) ACCExtractCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogout;
- (void)extractMaterialUpload:(id)a0 completion:(id /* block */)a1;
- (void)p_extractMaterialUploadPicture:(id)a0 completion:(id /* block */)a1;
- (void)p_extractMaterialUploadZip:(id)a0 completion:(id /* block */)a1;
- (void)p_configUploadService:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addObserver;

@end
