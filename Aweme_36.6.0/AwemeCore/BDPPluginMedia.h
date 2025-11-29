@interface BDPPluginMedia : BDPBridgeInstancePlugin

- (BOOL)enableContentRequest:(id)a0;
- (void)p_checkImageValidWithURL:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (id)p_compressImageData:(id)a0 targetWidth:(double)a1 targetHeight:(double)a2 quality:(double)a3;
- (void)requirePrivacy:(id /* block */)a0 instance:(id)a1 successBlock:(id /* block */)a2;
- (id)requestHeaderWithURL:(id)a0 uniqueID:(id)a1;
- (void)getHeaderWithURL:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)previewImageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getImageInfoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)compressImageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)saveImageToPhotosAlbumWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)saveVideoToPhotosAlbumWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)prefetchImagesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
