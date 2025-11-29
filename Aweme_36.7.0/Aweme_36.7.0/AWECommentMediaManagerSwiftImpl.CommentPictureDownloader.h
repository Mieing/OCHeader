@interface AWECommentMediaManagerSwiftImpl.CommentPictureDownloader : NSObject <AWECommentPictureDownloaderProtocol>

+ (void)savePictureToAlbumFor:(id)a0 mediaType:(unsigned long long)a1 atIndex:(long long)a2;
+ (BOOL)canDownloadPictureFor:(id)a0;
+ (id)obtainAbsolutePath:(id)a0;
+ (void)createLivePhoto:(id)a0 imageUrl:(id)a1 completion:(id /* block */)a2;
+ (void)obtainLivePhotoResource:(id)a0 imageUrl:(id)a1 placeholderImage:(id)a2 completion:(id /* block */)a3;

- (id)init;

@end
