@interface AWEKnowledgeSwiftImpl.ImageUploadClient : NSObject <BDImageXUploadClientDelegate> {
    void /* unknown type, empty encoding */ imageXUploadClient;
    void /* unknown type, empty encoding */ completion;
}

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
