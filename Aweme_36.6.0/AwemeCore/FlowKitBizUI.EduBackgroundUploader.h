@interface FlowKitBizUI.EduBackgroundUploader : NSObject <BDImageXUploadClientDelegate> {
    void /* unknown type, empty encoding */ uploadClient;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ uploadImageInfo;
}

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
