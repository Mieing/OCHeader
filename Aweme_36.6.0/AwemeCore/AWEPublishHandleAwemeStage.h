@class AWECreateAwemeResponse, AWEPublishFlowModel, AWEVideoPublishViewModel;

@interface AWEPublishHandleAwemeStage : AWEPublishMultiSplitableHandleAwemeStage {
    AWEPublishFlowModel *_flowModel;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse;

- (void)setFlowModel:(id)a0;
- (id)flowModel;
- (void)setupWithFlowModelIfNeeded;
- (void)saveResourcesToLocal;
- (id)initWithModel:(id)a0 createAwemeResponse:(id)a1;
- (void)updateDraft;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
