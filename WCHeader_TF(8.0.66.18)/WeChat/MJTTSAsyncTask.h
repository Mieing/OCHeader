@class NSString, MJAudioFileManager;

@interface MJTTSAsyncTask : MJSpeechAsyncTask

@property (readonly, nonatomic) BOOL isCloneTimbre;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) MJAudioFileManager *audioFileManager;

- (id)initWithText:(id)a0 roleID:(id)a1 isCloneTimbre:(BOOL)a2 audioFileManager:(id)a3 statusDidUpdateSignal:(id)a4;
- (void)startWithCompletionHandler:(id /* block */)a0;
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
