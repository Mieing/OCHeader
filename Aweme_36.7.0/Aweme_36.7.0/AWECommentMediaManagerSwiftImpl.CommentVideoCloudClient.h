@interface AWECommentMediaManagerSwiftImpl.CommentVideoCloudClient : NSObject <BDVideoUploadClientDelegate> {
    void /* unknown type, empty encoding */ streamMediaPathList;
    void /* unknown type, empty encoding */ uploadBusinessAuthParams;
    void /* unknown type, empty encoding */ mediaUploadCompletionBlock;
    void /* unknown type, empty encoding */ progressBlock;
    void /* unknown type, empty encoding */ streamMediaUploadClient;
    void /* unknown type, empty encoding */ vids;
    void /* unknown type, empty encoding */ streamMediaUploadProgress;
    void /* unknown type, empty encoding */ isStreamMediaUploading;
    void /* unknown type, empty encoding */ uploadStreamMediaProcessUpdateCount;
    void /* unknown type, empty encoding */ maxRetryTimes;
    void /* unknown type, empty encoding */ uploadProgressInfo;
    void /* unknown type, empty encoding */ uploadFinishedVids;
    void /* unknown type, empty encoding */ uploadFinishedVideoMetaInfos;
    void /* unknown type, empty encoding */ uploadError;
    void /* unknown type, empty encoding */ multiVideoClientDeleage;
}

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
