@class NSMutableDictionary;

@interface WAJSContextPlugin_InferenceManager : WAJSContextPluginBase

@property (retain, nonatomic) NSMutableDictionary *dicSessionId2Session;

- (id)createInferenceSessionWithModel:(id)a0 options:(id)a1 error:(id *)a2;
- (id)runInferenceSession:(id)a0 dicInput:(id)a1 error:(id *)a2;
- (BOOL)releaseInferenceSession:(id)a0;
- (void)dealloc;
- (BOOL)isSessionIdValid:(id)a0;
- (unsigned int)GenSessionID;
- (id)getXNetSDKVersion;
- (void).cxx_destruct;

@end
