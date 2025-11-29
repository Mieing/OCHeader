@class NSString;

@interface MJSTTAsyncTask : MJSpeechAsyncTask

@property (readonly, nonatomic) NSString *audioID;

- (id)initWithAudioID:(id)a0 statusDidUpdateSignal:(id)a1;
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
