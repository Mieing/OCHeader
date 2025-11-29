@interface AWECommentMediaManagerSwiftImpl.CommentImageXClient : NSObject <BDImageXUploadClientDelegate> {
    void /* unknown type, empty encoding */ compressCompletion;
    void /* unknown type, empty encoding */ imageXUploadClient;
    void /* unknown type, empty encoding */ progressBlock;
    void /* unknown type, empty encoding */ mediaUploadCompletionBlock;
    void /* unknown type, empty encoding */ uploadBusinessAuthParams;
    void /* unknown type, empty encoding */ imageList;
    void /* unknown type, empty encoding */ imageSourceList;
    void /* unknown type, empty encoding */ imageUploadProgress;
    void /* unknown type, empty encoding */ uploadImageProcessUpdateCount;
    void /* unknown type, empty encoding */ uploadImageProgressInfo;
    void /* unknown type, empty encoding */ uploadError;
    void /* unknown type, empty encoding */ isImageUploading;
    void /* unknown type, empty encoding */ uploadFinishedImageInfo;
    void /* unknown type, empty encoding */ imageInfoDict;
    void /* unknown type, empty encoding */ imageAspectRatio;
    void /* unknown type, empty encoding */ imageUris;
    void /* unknown type, empty encoding */ imageWidths;
    void /* unknown type, empty encoding */ imageHeights;
    void /* unknown type, empty encoding */ imageFormats;
    void /* unknown type, empty encoding */ imageSource;
}

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
