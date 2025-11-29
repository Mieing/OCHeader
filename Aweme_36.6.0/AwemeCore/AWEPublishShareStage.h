@class AWECreateAwemeResponse, AWEVideoPublishViewModel;

@interface AWEPublishShareStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (BOOL)handlePhotoNotAuthorized;
- (id)initWithModel:(id)a0 createAwemeResponse:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
