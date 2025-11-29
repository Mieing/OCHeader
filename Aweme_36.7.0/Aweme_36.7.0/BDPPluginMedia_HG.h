@interface BDPPluginMedia_HG : BDPBridgeInstancePlugin

- (void)previewImageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getImageInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)compressImageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)saveImageToPhotosAlbumWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)saveVideoToPhotosAlbumWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
