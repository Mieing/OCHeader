@interface AWEKnowledgeSwiftImpl.VideoUploadClient : NSObject <BDVideoUploadClientDelegate> {
    void /* unknown type, empty encoding */ videoUploadClient;
    void /* unknown type, empty encoding */ completion;
}

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
