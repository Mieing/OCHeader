@interface AWEPublishImageAlbumSaveManger : NSObject

+ (BOOL)addDetailLogOptimize;
+ (id)imageMetadataForPublishModel:(id)a0;
+ (id)metadataForImageWithMetaModel:(id)a0 index:(long long)a1;
+ (void)saveImageAlbumWithAwemeIfNeeded:(id)a0 publishModel:(id)a1 imageFileURLs:(id)a2 completion:(id /* block */)a3;
+ (id)mergedDataWithImageData:(id)a0 needOriginImageMetaData:(BOOL)a1 metadata:(id)a2;
+ (void)p_doSaveAfterPermissionWithURLList:(id)a0 metaModel:(id)a1 publishModel:(id)a2 completion:(id /* block */)a3;
+ (void)p_doSavePhotoInAlbumAfterPermissionWithURLList:(id)a0 metaModel:(id)a1 awemeAlbum:(id)a2 publishModel:(id)a3 completion:(id /* block */)a4;
+ (void)p_newDoSavePhotoInAlbumAfterPermissionWithURLList:(id)a0 metaModel:(id)a1 awemeAlbum:(id)a2 publishModel:(id)a3 completion:(id /* block */)a4;
+ (id)mergedDataWithImageData:(id)a0 metadata:(id)a1;
+ (void)p_saveImagesWithAIGCURLs:(id)a0 awemeAlbum:(id)a1 completion:(id /* block */)a2;
+ (void)p_saveImagesWithImageData:(id)a0 awemeAlbum:(id)a1 completion:(id /* block */)a2;
+ (void)saveImageAlbumWithAwemeIfNeeded:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (id)mergedDataWithImageDataOpt:(id)a0 needOriginImageMetaData:(BOOL)a1 metadata:(id)a2;

@end
