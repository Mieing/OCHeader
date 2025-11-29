@class NSString, TIMXSDKInstance;
@protocol TIMXSendMessageFileUploadManagerDelegate;

@interface TIMXSendMessageFileUploadManager : NSObject <TIMXFileUploadDelegate>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (weak, nonatomic) id<TIMXSendMessageFileUploadManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendOneFile:(id)a0 forMessage:(id)a1;
- (BOOL)isInvalidFile:(id)a0;
- (long long)sendMessageFileIfNeeded:(id)a0 conversation:(id)a1 shouldPerformSendBody:(BOOL *)a2;
- (id)fileIdentifierToUploadStartTimeDictionary;
- (void)trackFileUploadStart:(id)a0;
- (void)trackFileUpload:(id)a0 message:(id)a1 error:(id)a2;
- (void)uploadRequest:(id)a0 progressDidUpdate:(float)a1;
- (void)uploadRequest:(id)a0 didFailedWithError:(id)a1;
- (void)uploadRequest:(id)a0 didSuccessWithInfo:(id)a1;
- (void)uploadRequestCore:(id)a0 progressDidUpdate:(float)a1;
- (void)uploadRequestCore:(id)a0 didFailedWithError:(id)a1;
- (void)uploadRequestCore:(id)a0 didSuccessWithInfo:(id)a1;
- (BOOL)shouldPerformUploadFileLogicWithMessage:(id)a0 willSendFile:(id *)a1 files:(id)a2;
- (void)modifyMessage:(id)a0 files:(id)a1;
- (void)updateFilesWithRequestIdentifier:(id)a0 info:(id)a1;
- (void)handleUploadRequest_parallelSendMessage:(id)a0;
- (id)filesWithMessage:(id)a0 files:(id)a1;
- (void)notifyDelegateWithMessage:(id)a0 files:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
