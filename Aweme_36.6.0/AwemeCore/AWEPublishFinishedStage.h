@class AWEPublishFlowModel, AWEVideoPublishViewModel;

@interface AWEPublishFinishedStage : AWEPublishBaseStage {
    AWEPublishFlowModel *_flowModel;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;

- (void)setFlowModel:(id)a0;
- (id)flowModel;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)updateDraft;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
