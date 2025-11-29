@class NSString, MJAudioFileManager;

@interface MJSTSAsyncTask : MJSpeechAsyncTask

@property (readonly, nonatomic) NSString *audioID;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) MJAudioFileManager *audioFileManager;

- (id)initWithAudioID:(id)a0 roleID:(id)a1 audioFileManager:(id)a2 statusDidUpdateSignal:(id)a3;
- (void)startWithAudioData:(id)a0 completionHandler:(id /* block */)a1;
- (long long)taskTimeoutMillis;
- (long long)submitAsyncRequestImplWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (long long)queryAsyncRequestImplWithCompletionHandler:(id /* block */)a0;
- (void)processWithResult:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleTaskFailImplWithError:(id)a0 completionHandlers:(id)a1;
- (void)handleTaskSuccessImplWithResult:(id)a0 completionHandlers:(id)a1;
- (id)statusDidUpdateParams;
- (id)description;
- (void).cxx_destruct;

@end
