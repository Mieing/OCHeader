@interface AWECommentMediaManagerSwiftImpl.CommentLivePhotoUploader : NSObject <AWECommentMediaUploaderProtocol> {
    void /* unknown type, empty encoding */ mediaType;
    void /* function */ mediaUploadAuthCompletionBlock;
    void /* function */ mediaUploadCompressCompletionBlock;
    void /* function */ progressBlock;
    void /* function */ mediaUploadCompletionBlock;
    void /* unknown type, empty encoding */ liveVideoClient;
    void /* unknown type, empty encoding */ imageClient;
    void /* unknown type, empty encoding */ imageInfoDict;
    void /* unknown type, empty encoding */ vids;
    void /* unknown type, empty encoding */ uploadProgressInfo;
    void /* unknown type, empty encoding */ uploadMaxSize;
}

@property (nonatomic, copy) id /* block */ mediaUploadAuthCompletionBlock;
@property (nonatomic, copy) id /* block */ mediaUploadCompressCompletionBlock;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, copy) id /* block */ mediaUploadCompletionBlock;

- (void)configUploader;
- (id)uploadBusinessAuthParams;
- (id)generateAuthParams;
- (BOOL)startMediaUploadAuth:(id /* block */)a0;
- (id /* block */)configUploadAuthCompletion;
- (void)startUpload;
- (void).cxx_destruct;
- (id)init;

@end
