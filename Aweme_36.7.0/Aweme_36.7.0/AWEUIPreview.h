@interface AWEUIPreview : NSObject

+ (id)getPreviewVC;

- (id)previewForCommentCell;
- (id)previewForCommentFailedCell;
- (id)previewForCommentLoadMoreCell;
- (id)previewForCommentShowPanelCell;
- (id)collectPreviewDataFromConfigs;
- (id)collectPreviewConfigs;
- (id)transferConfigToModel:(id)a0;

@end
