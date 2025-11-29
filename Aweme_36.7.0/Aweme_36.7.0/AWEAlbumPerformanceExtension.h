@interface AWEAlbumPerformanceExtension : ACCAlbumExtension

+ (void)setAlbumPageCustomPage;

- (void)albumWillShowViewController:(id)a0;
- (void)albumDidHiddenViewController:(id)a0;
- (void)albumWillShowPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidHiddenPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumEarlyDidLoadPreviewController;

@end
