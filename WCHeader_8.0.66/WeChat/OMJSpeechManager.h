@interface OMJSpeechManager : NSObject

@property (nonatomic) struct SharedPtr<XMJSpeechManager> { struct XMJSpeechManager *_ptr; } backingSpeechManager;

- (id)initWithBackingSpeechManager:(const void *)a0;
- (long long)requestSpeechInfoWithRequestParams:(id)a0 requestBuff:(id)a1 iLinkAppRequest:(id)a2 iLinkCmd:(id)a3 completionHandler:(id /* block */)a4;
- (long long)requestSpeechRecognitionWithAudioData:(id)a0 postParams:(id)a1 iLinkAppRequest:(id)a2 iLinkCmd:(id)a3 completionHandler:(id /* block */)a4;
- (long long)requestFullSpeechRecognitionWithAudioData:(id)a0 postParams:(id)a1 voiceIDForHttp:(id)a2 iLinkAppRequest:(id)a3 iLinkCmd:(id)a4 completionHandler:(id /* block */)a5;
- (long long)requestSpeechToSpeechWithAudioData:(id)a0 postParams:(id)a1 voiceIDForHttp:(id)a2 iLinkAppRequest:(id)a3 iLinkCmd:(id)a4 completionHandler:(id /* block */)a5;
- (void)cancelTask:(long long)a0;
- (void)cancelAll;
- (long long)submitAsyncSpeechRequestWithAudioData:(id)a0 postParams:(id)a1 voiceIDForHttp:(id)a2 iLinkAppRequest:(id)a3 iLinkCmd:(id)a4 audioDurationMillis:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (long long)queryAsyncSpeechRequestWithSubmitTaskID:(id)a0 iLinkAppRequest:(id)a1 iLinkCmd:(id)a2 contextBuff:(id)a3 completionHandler:(id /* block */)a4;
- (long long)submitAsyncTTSRequestWithInfo:(id)a0 iLinkAppRequest:(id)a1 iLinkCmd:(id)a2 completionHandler:(id /* block */)a3;
- (long long)queryAsyncTTSRequestWithSubmitTaskID:(id)a0 iLinkAppRequest:(id)a1 iLinkCmd:(id)a2 contextBuff:(id)a3 completionHandler:(id /* block */)a4;
- (long long)submitAsyncSpeechCloneRequestWithInfo:(id)a0 iLinkAppRequest:(id)a1 iLinkCmd:(id)a2 completionHandler:(id /* block */)a3;
- (long long)queryAsyncSpeechCloneRequestWithSubmitTaskID:(id)a0 iLinkAppRequest:(id)a1 iLinkCmd:(id)a2 contextBuff:(id)a3 completionHandler:(id /* block */)a4;
- (long long)submitAsyncSpeechSynthRequestWithInfo:(id)a0 iLinkAppRequest:(id)a1 iLinkCmd:(id)a2 completionHandler:(id /* block */)a3;
- (long long)queryAsyncSpeechSynthRequestWithSubmitTaskID:(id)a0 iLinkAppRequest:(id)a1 iLinkCmd:(id)a2 contextBuff:(id)a3 completionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
