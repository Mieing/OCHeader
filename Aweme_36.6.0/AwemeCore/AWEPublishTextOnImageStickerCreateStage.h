@class AWEVideoPublishViewModel;

@interface AWEPublishTextOnImageStickerCreateStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)jumpStage;
- (void)doneStage;
- (void)downloadSourceEffectAndCopyToTempFolder:(id /* block */)a0;
- (void)downloadSourceEffect:(id)a0 completion:(id /* block */)a1;
- (void)copySourceEffect:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
