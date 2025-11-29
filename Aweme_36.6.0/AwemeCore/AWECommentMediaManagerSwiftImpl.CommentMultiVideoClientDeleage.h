@interface AWECommentMediaManagerSwiftImpl.CommentMultiVideoClientDeleage : NSObject <BDVideoUploadClientDelegate> {
    void /* unknown type, empty encoding */ delegate;
}

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (void)videoUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2 identifier:(id)a3;
- (void)videoUpload:(id)a0 fileIndex:(long long)a1 videoInfo:(id)a2 error:(id)a3 log:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
