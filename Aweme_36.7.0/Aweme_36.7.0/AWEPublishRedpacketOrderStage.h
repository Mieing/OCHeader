@class AWEPublishFlowModel, AWEVideoPublishViewModel;

@interface AWEPublishRedpacketOrderStage : AWEPublishBaseStage {
    AWEPublishFlowModel *_flowModel;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;

+ (BOOL)needRedpacketOrderWithModel:(id)a0;

- (void)setFlowModel:(id)a0;
- (id)flowModel;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
