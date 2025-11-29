@class AWEPublishFlowModel, NSArray, AWEBDUploadClientService, NSString, AWEResourceUploadParametersResponseModel, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPublishAmazingUploadImagesStage : AWEPublishBaseStage <BDImageUploadClientDelegate> {
    AWEPublishFlowModel *_flowModel;
}

@property (retain, nonatomic) AWEBDUploadClientService *uploadService;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (copy, nonatomic) NSArray *uploadImageModels;
@property (copy, nonatomic) NSArray *imageAlbumUploadModels;
@property (retain) NSArray *currentUploadImageModels;
@property (retain) NSError *firstError;
@property long long blockIndex;
@property (nonatomic) BOOL isPreupload;
@property (nonatomic) long long didPreuploadCount;
@property (copy, nonatomic) NSString *mediaDataString;
@property (copy, nonatomic) NSString *trackInfoJsonString;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) double uploadStageDelayTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaDataQueue;
@property (copy, nonatomic) id /* block */ preuploadFinishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)allowMergeUpload;
- (void)imageUploadDidFinish:(id)a0;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageUpload:(id)a0 onLogInfo:(id)a1;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageUpload:(id)a0 updateStage:(long long)a1 timestamp:(double)a2;
- (long long)imageUploadGetNetState:(id)a0;
- (id)imageUploadGetMediaDataString:(id)a0;
- (void)setFlowModel:(id)a0;
- (id)flowModel;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)initWithModels:(id)a0 uploadParams:(id)a1 trackInfoJsonString:(id)a2 isPreupload:(BOOL)a3;
- (id)initWithModels:(id)a0 uploadParams:(id)a1 isPreupload:(BOOL)a2;
- (void)p_cancelPreupload:(id)a0;
- (void)p_continueUpload;
- (void)superResProcess;
- (void)p_singleImageDidFinishWithFileIndex:(long long)a0 imageId:(id)a1 errCode:(long long)a2 error:(id)a3;
- (void)p_uploadImageProgressDidUpdate:(long long)a0 fileIndex:(long long)a1;
- (void)p_uploadImagesDidFinish;
- (int)p_getUploadImageNetworkState;
- (id)getMediaDataString;
- (void)p_configAndStartBDUploadClientWithFilePaths:(id)a0;
- (void)switchUploaderEnv:(id)a0;
- (void)bdUploadCancel;
- (void).cxx_destruct;
- (id)init;
- (void)run;
- (void)dealloc;
- (void)retry;

@end
