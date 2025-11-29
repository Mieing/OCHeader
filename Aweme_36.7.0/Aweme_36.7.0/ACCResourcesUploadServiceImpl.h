@class NSString, NSMutableDictionary, AWEResourceUploadParametersResponseModel;

@interface ACCResourcesUploadServiceImpl : NSObject <ACCResourcesUploadServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *fileMap;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filePathWith:(id)a0;
- (void)uploadAuthorInfo:(id /* block */)a0;
- (void)logForUGCResourcesWithPath:(id)a0 scene:(id)a1;
- (id)createZipWithFilePath:(id)a0;
- (void)startUploadResources:(id)a0 authParameters:(id)a1 completion:(id /* block */)a2;
- (void)downloadResourceWithURLString:(id)a0 completion:(id /* block */)a1;
- (id)unzipWithPath:(id)a0;
- (id)p_generateFilePath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
