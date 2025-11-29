@protocol AWEPublishEventProtocol;

@interface AWEPublishInfiniEventStage : AWEPublishBaseStage

@property (retain, nonatomic) id<AWEPublishEventProtocol> event;

- (id)stageType;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)description;
- (void)run;

@end
