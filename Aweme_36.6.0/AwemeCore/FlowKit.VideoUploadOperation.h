@interface FlowKit.VideoUploadOperation : NSOperation <BDVideoUploadClientDelegate> {
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _finished;
    void /* unknown type, empty encoding */ _executing;
    void /* unknown type, empty encoding */ _cancelled;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ durationEvent;
}

@property (nonatomic, readonly) BOOL finished;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL cancelled;
@property (nonatomic, readonly) BOOL asynchronous;

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (long long)videoUploadGetNetState:(id)a0;
- (void)videoUpload:(id)a0 onLogInfo:(id)a1;
- (void)videoUpload:(id)a0 didFinish:(id)a1 failNum:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)dealloc;
- (void)cancel;
- (BOOL)isFinished;

@end
