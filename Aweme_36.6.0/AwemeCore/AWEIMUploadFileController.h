@class NSString, NSProgress, NSDictionary, TTHttpTask;

@interface AWEIMUploadFileController : NSObject <AWEIMFileUploader>

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (weak, nonatomic) TTHttpTask *ttTask;
@property (copy, nonatomic) NSString *uploadURL;
@property (retain, nonatomic) id parameters;
@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSDictionary *headers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addObserver;
- (void)p_removeObserver;
- (void)uploadWithContext:(id)a0;
- (void)opt_uploadOriginData:(id)a0 fileType:(int)a1 buildDataBlock:(id /* block */)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4 leftRetryCount:(long long)a5;
- (void)uploadOriginData:(id)a0 md5:(id)a1 filePath:(id)a2 fileType:(int)a3 buildDataBlock:(id /* block */)a4 progressBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)cancelUpload;

@end
