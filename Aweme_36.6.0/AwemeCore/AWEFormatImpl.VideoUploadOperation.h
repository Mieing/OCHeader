@interface AWEFormatImpl.VideoUploadOperation : NSObject <BDVideoUploadClientDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ req;
}

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
