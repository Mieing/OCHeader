@class NSString, NSDictionary;
@protocol AWEIMNextGenerationUploadFileClientProtocol;

@interface AWEIMNextGenerationUploadFileController : NSObject <BDVideoUploadEventManagerProtocol, AWEIMFileUploader>

@property (retain) id<AWEIMNextGenerationUploadFileClientProtocol> quickUploadClient;
@property (retain) id<AWEIMNextGenerationUploadFileClientProtocol> originUploadClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *uploadURL;
@property (retain, nonatomic) id parameters;
@property (retain, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *mimeType;

- (void)eventManagerDidUpdate:(id)a0;
- (void)uploadWithContext:(id)a0;
- (void)p_uploadWithContext:(id)a0 leftRetryCount:(long long)a1;
- (void)trackRetryWithType:(id)a0 code:(long long)a1;
- (BOOL)shouldIgnoreVerifyImageForUploadFileType:(int)a0;
- (id)generateUploadClientOfFileType:(int)a0 useStreamReader:(BOOL)a1 config:(id)a2;
- (BOOL)shouldRetry:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancelUpload;

@end
