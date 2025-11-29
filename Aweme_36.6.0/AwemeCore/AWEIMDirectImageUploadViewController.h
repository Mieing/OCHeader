@class AWEIMFileUploaderContext, NSProgress, NSString, NSDictionary, TTHttpTask;

@interface AWEIMDirectImageUploadViewController : NSObject <AWEIMFileUploader>

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) AWEIMFileUploaderContext *context;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (weak, nonatomic) TTHttpTask *ttTask;
@property (copy, nonatomic) NSString *uploadURL;
@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) id parameters;
@property (retain, nonatomic) NSDictionary *headers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addObserver;
- (void)p_removeObserver;
- (void)uploadWithContext:(id)a0;
- (BOOL)shouldRetryWithError:(id)a0;
- (BOOL)p_shouldIgnoreVerifyImageForUploadFileType:(int)a0;
- (void)p_uploadWithContext:(id)a0 leftRetryCount:(long long)a1;
- (void)trackRetryWithType:(id)a0 code:(long long)a1;
- (id)policySetString;
- (id)policyExtraString;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)cancelUpload;

@end
