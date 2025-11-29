@class NSString, AWEBDUploadClientService, AWEResourceUploadParametersResponseModel, AWEVideoPublishViewModel;

@interface AWEPublishScanOriginPhotoStage : AWEPublishBaseStage <BDImageUploadClientDelegate>

@property (retain, nonatomic) AWEVideoPublishViewModel *model;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (retain, nonatomic) AWEBDUploadClientService *BDUploadService;
@property (nonatomic) BOOL hasError;
@property (copy, nonatomic) NSString *uploadedImageId;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) unsigned long long begainaddPictureInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageUploadDidFinish:(id)a0;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageUpload:(id)a0 onLogInfo:(id)a1;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (long long)imageUploadGetNetState:(id)a0;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)updateUploadParams:(id)a0;
- (void)p_configAndStartBDUploadClient:(id)a0;
- (id)materialIdFromUploadedImageIds;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)run;

@end
