@class NSString, AWEPublishConfigResponseModel, AWEVideoPublishViewModel;

@interface AWEPublishVidValidationStage : AWEPublishBaseStage <AWEPublishCreateMaterialMessage>

@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) AWEPublishConfigResponseModel *reponseModel;
@property BOOL isExecuted;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL isSupportWaitRemoteVid;
@property (copy, nonatomic) NSString *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)didCreateVid:(id)a0 scene:(id)a1 taskId:(id)a2;
- (void)p_run;
- (void)notifyContinueWithVid:(id)a0 scene:(id)a1 taskId:(id)a2;
- (id)initWithVideoId:(id)a0 scene:(id)a1;
- (BOOL)waitVidIfNeeded;
- (void)sendMergeStartEventIfNeeded;
- (void)p_checkVid;
- (BOOL)shouldToValidation;
- (void)notifyStageError;
- (void)notifyStageDone;
- (void)sendRemoteVidReusedEventIfNeeded;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)init;
- (void)run;
- (void)dealloc;

@end
