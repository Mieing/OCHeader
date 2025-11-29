@class NSMutableDictionary;

@interface MJSpeechCgiHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *cgiByTaskIDs;

+ (id)parseSTTScentencesFromTransResult:(id)a0;
+ (unsigned long long)mapToAudioFormatFromEncodeType:(int)a0;

- (id)init;
- (long long)generateNewTaskID;
- (long long)submitAsyncSTTRequestWithAudioID:(id)a0 voiceIDForRequest:(id)a1 audioSlice:(id)a2 audioDurationMillis:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (long long)queryAsyncSTTRequestWithAudioID:(id)a0 submitTaskID:(id)a1 contextBuff:(id)a2 completionHandler:(id /* block */)a3;
- (void)cancelRequest:(id)a0;
- (void)cancelRequests:(id)a0;
- (void)cancelAllRequests;
- (long long)reportCaptionInfo:(id)a0 clientID:(id)a1;
- (long long)requestSTTParamsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
