@class NSString, NSRecursiveLock, NSArray, AWEPublishFlowModel, NSMutableDictionary, AWEBDUploadClientService, AWEResourceUploadParametersResponseModel, NSMutableArray, AWEUploadCoverHelper;

@interface AWEPublishUploadPhotoStage : AWEPublishBaseStage <BDImageUploadClientDelegate> {
    AWEPublishFlowModel *_flowModel;
}

@property (retain, nonatomic) AWEBDUploadClientService *BDUploadService;
@property (retain, nonatomic) NSMutableDictionary *uploadedImageIds;
@property (retain, nonatomic) NSMutableDictionary *errors;
@property (retain, nonatomic) NSMutableArray *progressForEachFile;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) NSRecursiveLock *AWEPublishUploadPhotoStageLock;
@property (copy, nonatomic) NSArray *typeKeys;
@property (copy, nonatomic) NSArray *fileURLs;
@property (retain, nonatomic) NSMutableArray *filePaths;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (retain, nonatomic) AWEUploadCoverHelper *coverHelper;
@property (copy, nonatomic) NSString *materialId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageUploadDidFinish:(id)a0;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageUpload:(id)a0 onLogInfo:(id)a1;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (long long)imageUploadGetNetState:(id)a0;
- (void)setFlowModel:(id)a0;
- (id)flowModel;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)initWithPhotoTypeKeys:(id)a0 fileUrls:(id)a1 uploadParams:(id)a2;
- (id)materialIdFromUploadedImageIds;
- (void)configWithTypeKeys:(id)a0 fileUrls:(id)a1 uploadParams:(id)a2;
- (void)p_configAndStartBDUploadClient;
- (id)initWithFileUrls:(id)a0 uploadParams:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
