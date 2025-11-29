@interface AWEClassroomImpl.ClassroomMediaUploader : NSObject <BDVideoUploadClientDelegate, BDImageXUploadClientDelegate> {
    void /* unknown type, empty encoding */ serviceId;
    void /* unknown type, empty encoding */ spaceName;
    void /* unknown type, empty encoding */ imageXAuth;
    void /* unknown type, empty encoding */ videoAuth;
    void /* unknown type, empty encoding */ imageXUploadClients;
    void /* unknown type, empty encoding */ imageXUploadCompletions;
    void /* unknown type, empty encoding */ videoUploadClients;
    void /* unknown type, empty encoding */ videoUploadCompletions;
    void /* unknown type, empty encoding */ imageXUploadAllCompletion;
}

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
