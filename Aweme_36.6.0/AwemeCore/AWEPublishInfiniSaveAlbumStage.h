@class AWECreateAwemeResponse, NSString, AWEVideoPublishViewModel;

@interface AWEPublishInfiniSaveAlbumStage : AWEPublishBaseStage <AWEPublishRunnableStageObserver>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithFlowModelIfNeeded;
- (BOOL)handlePhotoNotAuthorized;
- (id)initWithModel:(id)a0 createAwemeResponse:(id)a1;
- (id)noteStyleCoverURL;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
