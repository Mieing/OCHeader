@class AWEVideoPublishViewModel;
@protocol ACCPublishMergeImageHelperProtocol;

@interface AWEPublishCoverMergeStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) unsigned long long autoMergeCustomCoverType;
@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeImageHelper;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)p_run;
- (void)p_oldRun;
- (void)jumpStage;
- (void)mergePicTemplateCoverWithRetryCount:(long long)a0;
- (void)mergeCover;
- (void)mergeVideoCoverWithRetryCount:(long long)a0;
- (void)mergeFail;
- (void)trackEventCoverMergeResult:(id)a0 success:(BOOL)a1;
- (void)mergeDone;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
