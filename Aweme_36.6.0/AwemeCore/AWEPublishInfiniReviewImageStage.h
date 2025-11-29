@class AWEPublishInfiniReviewImageExportStage, AWEPublishSerialStage, AWEPublishAmazingUploadImagesStage, AWEVideoPublishViewModel, AWEPublishAlbumImageSendFramesRequestStage, NSString;

@interface AWEPublishInfiniReviewImageStage : AWEPublishBaseStage <AWEPublishRunnableStageObserver>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEPublishInfiniReviewImageExportStage *imageExportStage;
@property (retain, nonatomic) AWEPublishAmazingUploadImagesStage *uploadImagesStage;
@property (retain, nonatomic) AWEPublishAlbumImageSendFramesRequestStage *sendRequestStage;
@property (retain, nonatomic) AWEPublishSerialStage *serialStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (id)stageArray;
- (void).cxx_destruct;
- (void)run;

@end
