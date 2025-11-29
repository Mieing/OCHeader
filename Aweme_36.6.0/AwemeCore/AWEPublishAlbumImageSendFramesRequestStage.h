@class AWECreateAwemeResponse, NSArray, AWEVideoPublishViewModel;

@interface AWEPublishAlbumImageSendFramesRequestStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse;
@property (copy, nonatomic) NSArray *uploadFramesItems;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)processFramesParams;
- (void)startRequestWithImageContent:(id)a0;
- (id)initWithModel:(id)a0 createAwemeResponse:(id)a1 uploadFramesItems:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)run;
- (void)uploadFinished;

@end
