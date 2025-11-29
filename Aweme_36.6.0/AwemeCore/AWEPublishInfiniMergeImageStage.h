@class NSArray, AWEVideoPublishViewModel;
@protocol ACCPublishMergeImageHelperProtocol;

@interface AWEPublishInfiniMergeImageStage : AWEPublishBaseStage

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeImageHelper;

- (id)initWithPublishViewModel:(id)a0;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)callbackFaild;
- (void)callbackSucceedWithResults:(id)a0;
- (void)getProcesseImageWithCompletion:(id /* block */)a0;
- (BOOL)shouldUseCacheForImages;
- (id)itemModelForCache:(id)a0;
- (void)produceMergeFile;
- (void)handleOriginImageWithProject:(id)a0;
- (BOOL)shouldUseCacheForSingleImage;
- (void)produceCacheFileForSingleImage;
- (void)yieldResult:(id)a0;
- (void)fetchOriginSource:(id /* block */)a0;
- (BOOL)shouldUseOriginForImages;
- (void)produceMergeFileForImages;
- (void)refactor_run;
- (void).cxx_destruct;
- (void)run;
- (void)updateProgress:(double)a0;

@end
