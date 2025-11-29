@interface AWECommentMediaManagerSwiftImpl.CommentVideoUploader : NSObject <AWECommentMediaUploaderProtocol> {
    void /* function */ mediaUploadAuthCompletionBlock;
    void /* function */ mediaUploadCompressCompletionBlock;
    void /* unknown type, empty encoding */ mediaType;
    void /* function */ mediaUploadCompletionBlock;
    void /* function */ progressBlock;
    void /* unknown type, empty encoding */ videoUploadClient;
}

@property (nonatomic, copy) id /* block */ mediaUploadAuthCompletionBlock;
@property (nonatomic, copy) id /* block */ mediaUploadCompressCompletionBlock;
@property (nonatomic, copy) id /* block */ mediaUploadCompletionBlock;
@property (nonatomic, copy) id /* block */ progressBlock;

- (void)configUploader;
- (id)uploadBusinessAuthParams;
- (id)generateAuthParams;
- (BOOL)startMediaUploadAuth:(id /* block */)a0;
- (id /* block */)configUploadAuthCompletion;
- (void)startUpload;
- (void).cxx_destruct;
- (id)init;

@end
