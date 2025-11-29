@interface ACCCanvasUtils : NSObject

+ (void)p_reGenerateCanvasWithPublishModel:(id)a0 mediaContainerView:(id)a1;
+ (void)target:(id)a0 mediaContainerView:(id)a1;
+ (id)canvasVideoAssetWithPublishModel:(id)a0 needSave:(BOOL)a1;
+ (void)setupVideoDurationForVideoAsset:(id)a0 publishModel:(id)a1;
+ (id)canvasVideoWithPhoto:(id)a0 publishModel:(id)a1 needSave:(BOOL)a2;
+ (void)p_updateCanvasContentWithPhoto:(id)a0 publishModel:(id)a1 needSave:(BOOL)a2;
+ (BOOL)isSinglePhotoCanvasWithPublishModel:(id)a0;
+ (void)configPreviewEdge:(id)a0 withPublishProject:(id)a1 nle:(id)a2 mediaContainerView:(id)a3;
+ (void)setUpCanvasWithPublishModel:(id)a0 mediaContainerView:(id)a1;
+ (void)updateCanvasContentWithPhoto:(id)a0 publishModel:(id)a1;
+ (struct CGSize { double x0; double x1; })canvasExportSizeWithPublishModel:(id)a0 mediaContainerView:(id)a1;
+ (BOOL)enableSinglePhotoCanvasWhatYouSeeIsWhatYouGetWithPublishModel:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })singlePhotoMediaContainerViewFrameWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })singlePhotoCanvasSizeWithImageSize:(struct CGSize { double x0; double x1; })a0 mediaContainerViewSize:(struct CGSize { double x0; double x1; })a1;
+ (void)resetPreviewEdgeWithProject:(id)a0 completion:(id /* block */)a1;

@end
