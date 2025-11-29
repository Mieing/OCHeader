@interface WCTimelineHeaderPreviewEditVideoCompositionTask : WCSightVideoCompositeTask

@property (nonatomic) struct CGSize { double width; double height; } previewThumbSize;

- (id)initWithTaskId:(id)a0 srcPHAsset:(id)a1 editVideoAttr:(id)a2 compositionAttr:(id)a3 previewThumbImageSize:(struct CGSize { double x0; double x1; })a4;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getThumbImageForEditVideoFromPath:(id)a0;

@end
