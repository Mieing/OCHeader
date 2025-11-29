@interface AWECommentMediaManagerSwiftImpl.CommentImageMediaUploader : NSObject <AWECommentMediaUploaderProtocol> {
    void /* unknown type, empty encoding */ mediaType;
    void /* function */ mediaUploadAuthCompletionBlock;
    void /* function */ mediaUploadCompressCompletionBlock;
    void /* unknown type, empty encoding */ imageXUploadClient;
    void /* function */ progressBlock;
    void /* function */ mediaUploadCompletionBlock;
}

@property (nonatomic, copy) id /* block */ mediaUploadAuthCompletionBlock;
@property (nonatomic, copy) id /* block */ mediaUploadCompressCompletionBlock;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, copy) id /* block */ mediaUploadCompletionBlock;

- (void)startUpload;
- (void)configUploader;
- (id)uploadBusinessAuthParams;
- (id)generateAuthParams;
- (BOOL)startMediaUploadAuth:(id /* block */)a0;
- (id /* block */)configUploadAuthCompletion;
- (void).cxx_destruct;
- (id)init;

@end
