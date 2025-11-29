@class NSError, AWEPublishAmazingUploadImagesStage, NSArray, AWEVideoPublishViewModel, NSString, AWEPublishSerialStage, AWEPublishInfiniReviewImageExportStage, AWEResourceUploadParametersResponseModel, NSObject;
@protocol OS_dispatch_group, AWEStudioAwemeModelProtocol, ACCFramesUploadNetServiceProtocol;

@interface AWEPublishInfiniReviewSlidesStage : AWEPublishBaseStage <AWEPublishRunnableStageObserver>

@property (retain, nonatomic) id<AWEStudioAwemeModelProtocol> aweme;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (retain, nonatomic) AWEPublishInfiniReviewImageExportStage *imageExportStage;
@property (retain, nonatomic) AWEPublishAmazingUploadImagesStage *uploadImagesStage;
@property (retain, nonatomic) AWEPublishSerialStage *imageReviewStage;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (copy, nonatomic) id /* block */ imageHandleCompletion;
@property (retain, nonatomic) NSError *imageHandleError;
@property (retain, nonatomic) NSArray *videoIds;
@property (retain, nonatomic) NSArray *videoMaterialIds;
@property (retain, nonatomic) NSArray *imageIds;
@property (retain, nonatomic) NSArray *imageMaterialInfos;
@property (retain, nonatomic) id<ACCFramesUploadNetServiceProtocol> framesUploadService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (void)reviewAudiosIfNeeded;
- (void)reviewVideosIfNeeded;
- (void)reviewImagesIfNeeded;
- (void)captionsFeedbackIfNeeded;
- (void)reviewFinished;
- (void)updateSlidesFramesWithCompletion:(id /* block */)a0;
- (BOOL)checkFramesUpdateInfo:(id *)a0;
- (id)imageUriWithOriginIndex:(long long)a0;
- (void)handleImageFramesInfo;
- (void).cxx_destruct;
- (void)run;

@end
