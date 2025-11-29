@interface ACCNewVideoCoverStickerFeatureServiceImpl : ACCImageAlbumStickerFeatureServiceImpl

- (id)containerConfig;
- (BOOL)shouldChangeAlbumImagePluginsWithMaterialSize;
- (BOOL)shouldRemovePreViewPlugin;
- (Class)safeAreaViewClass;

@end
