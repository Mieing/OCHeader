@class NSArray, AWEVideoPublishViewModel;
@protocol ACCPublishMergeImageHelperProtocol;

@interface AWEPublishImageWaterMarkStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeImageHelper;

- (id)initWithPublishViewModel:(id)a0;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)callbackFaild;
- (void)callbackSucceedWithResults:(id)a0;
- (void)getProcesseImageWithCompletion:(id /* block */)a0;
- (void)addAIWaterMarkWithSourceImage:(id)a0 waterMarkImagePath:(id)a1 results:(id)a2;
- (void)addNormalWaterMarkWithSourceImage:(id)a0 userName:(id)a1 waterMarkImagePath:(id)a2 results:(id)a3;
- (void).cxx_destruct;
- (void)run;
- (void)updateProgress:(double)a0;

@end
