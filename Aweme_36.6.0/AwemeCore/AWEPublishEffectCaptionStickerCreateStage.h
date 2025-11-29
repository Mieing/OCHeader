@class AWEVideoPublishViewModel;

@interface AWEPublishEffectCaptionStickerCreateStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)jumpStage;
- (id)finalCaptionsWithCaptions:(id)a0 effectCaptions:(id)a1 musicDuration:(double)a2;
- (void)doneStage;
- (void)prepareUploadEffectSourceWithCaptions:(id)a0 completion:(id /* block */)a1;
- (void)generateNLEModelStringWithCaptions:(id)a0 completion:(id /* block */)a1;
- (void)downloadSourceEffectAndCopyToTempFolder:(id /* block */)a0;
- (void)downloadSourceEffect:(id)a0 completion:(id /* block */)a1;
- (void)copySourceEffect:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
