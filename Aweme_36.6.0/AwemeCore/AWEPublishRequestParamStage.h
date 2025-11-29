@class AWEResourceUploadParametersResponseModel, AWEPublishFlowModel, AWEVideoPublishViewModel;

@interface AWEPublishRequestParamStage : AWEPublishBaseStage {
    AWEPublishFlowModel *_flowModel;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) BOOL publishClicked;
@property (nonatomic) BOOL forceUpdateAuthKey;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;

- (void)setFlowModel:(id)a0;
- (id)flowModel;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)p_runWithParams:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
