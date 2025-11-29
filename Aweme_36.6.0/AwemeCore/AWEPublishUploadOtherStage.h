@class NSString, AWEResourceUploadParametersResponseModel, AWEVideoPublishViewModel, AWECreateAwemeResponse;
@protocol ACCFramesUploadNetServiceProtocol;

@interface AWEPublishUploadOtherStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) NSString *uploadVideoUrl;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (copy, nonatomic) NSString *uploadedResourceId;
@property (retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse;
@property (retain, nonatomic) id<ACCFramesUploadNetServiceProtocol> framesUploadService;

- (id)aweme;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)initWithModel:(id)a0 uploadVideoUrl:(id)a1 uploadParams:(id)a2 uploadedResourceId:(id)a3 createAwemeResponse:(id)a4;
- (void)updateFramesWithItemID:(id)a0 videoId:(id)a1 materialId:(id)a2 stickers:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)run;
- (id)stickers;

@end
