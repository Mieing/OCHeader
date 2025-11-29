@interface AWECommentMediaManagerSwiftImpl.CommentMediaUploaderManager : NSObject <AWECommentMediaUploaderManagerProtocol> {
    void /* unknown type, empty encoding */ mediaUploaderManagerElementMap;
    void /* unknown type, empty encoding */ uploadFinishedCallback;
}

- (void)uploadMedia:(id)a0 mediaUploadCompletionBlock:(id /* block */)a1 progressBlock:(id /* block */)a2;
- (id)imageUploader:(id)a0 imageSource:(id)a1;
- (id)livePhotoUploader:(id)a0;
- (id)audioUploader:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
