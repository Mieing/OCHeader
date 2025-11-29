@interface AWECommentMediaManagerSwiftImpl.CommentMediaResourceFileManager : NSObject <AWECommentMediaResourceFileManagerProtocol>

- (void)deleteCommentLocalAudioDataIfNeeded;
- (id)saveImageToTargetDirectory:(id)a0 dir:(id)a1;
- (void)saveImagesWithImages:(id)a0 completion:(id /* block */)a1;
- (void)deleteCommentLocalLivePhotoDataIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
