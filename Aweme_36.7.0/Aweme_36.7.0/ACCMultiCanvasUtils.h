@interface ACCMultiCanvasUtils : NSObject

+ (id)backupVideoAsset;
+ (void)trackDraftResourceValidationFailed:(id)a0 publishModel:(id)a1;
+ (id)canvasVideoAssetWithProject:(id)a0;
+ (void)regenerateCanvasWithProject:(id)a0 asset:(id)a1;
+ (id)canvasConfigProject:(id)a0;
+ (id)canvasSourceWithProject:(id)a0;
+ (void)target:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1;
+ (void)setupVideoDurationForVideoAsset:(id)a0 project:(id)a1;
+ (void)setupImageDurationForVideoAsset:(id)a0 project:(id)a1;
+ (void)updateCanvasConfigWithProject:(id)a0;
+ (id)canvasVideoWithPhoto:(id)a0 publishModel:(id)a1;
+ (id)canvasVideoWithImagePath:(id)a0 project:(id)a1;
+ (long long)contentModeWithMediaContentSize:(struct CGSize { double x0; double x1; })a0;
+ (double)defaultScaleWithContentSize:(struct CGSize { double x0; double x1; })a0 canvasSize:(struct CGSize { double x0; double x1; })a1 project:(id)a2;
+ (void)updateCanvasWithProject:(id)a0 oldDefaultScale:(double)a1;
+ (void)updateCanvasSizeOfProject:(id)a0 strategy:(long long)a1;
+ (struct CGSize { double x0; double x1; })editPresetCanvasSizeWithContentSize:(struct CGSize { double x0; double x1; })a0 strategy:(long long)a1;
+ (long long)contentModeWithMediaContentRatio:(double)a0;
+ (struct CGSize { double x0; double x1; })canvasSizeWithMediaContentSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ipadPlayerFrame;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrameWithMediaContentSize:(struct CGSize { double x0; double x1; })a0;
+ (void)setUpCanvasWithProject:(id)a0;
+ (void)updateCanvasVideo:(id)a0 withProject:(id)a1;
+ (void)updateCanvasContentForImageTemplateWithPhoto:(id)a0 templateId:(id)a1 editDataInfo:(id)a2 mediaId:(id)a3 publishModel:(id)a4;
+ (void)restoreDefaultCanvasSizeWithProject:(id)a0;
+ (void)makeCanvasSizeSameWithPhotoWithProject:(id)a0;
+ (void)checkCanvasWithProject:(id)a0;
+ (long long)contentModeWithProject:(id)a0;

@end
