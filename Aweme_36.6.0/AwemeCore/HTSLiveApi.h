@class NSMutableDictionary, IESLiveChunkDataHelper;
@protocol IESLiveMonitor;

@interface HTSLiveApi : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestPool;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) IESLiveChunkDataHelper *chunkDataHelper;

- (id)postChunk:(id)a0;
- (id)get:(id)a0 retryCount:(long long)a1;
- (id)tintTagsToHeaders:(id)a0 tintTags:(id)a1;
- (void)request:(id)a0 finishedWithError:(id)a1;
- (void)onRequest:(id)a0 finishedWithJsonObj:(id)a1;
- (id)get:(id)a0 retryCount:(long long)a1 complete:(id /* block */)a2;
- (id)urlWithRequest:(id)a0;
- (id)netflowJoint:(id)a0;
- (id)postForJSON:(id)a0;
- (void)p_trackPBExceptionWithRequest:(id)a0 exception:(id)a1;
- (id)request:(id)a0 retryCount:(long long)a1;
- (id)p_request:(id)a0 retryCount:(long long)a1;
- (void)request:(id)a0 finishedWithResponse:(id)a1;
- (id)getPB:(id)a0 timeout:(id)a1;
- (id)p_requestPBWith:(id)a0 method:(long long)a1 timeout:(id)a2;
- (id)p_requestJSONWith:(id)a0 method:(long long)a1;
- (void)trackServiceWithJsonObj:(id)a0 andRequest:(id)a1 duration:(double)a2;
- (void)callbackInBackgroundThread:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)analysisPbResponseWithModel:(id)a0 request:(id)a1 error:(id)a2 startTime:(double)a3;
- (void)trackServiceErrorWithParamsModel:(id)a0 duration:(double)a1;
- (void)tr_trackerPBRequest:(id)a0 message:(id)a1 duration:(double)a2;
- (void)analysisJsonResponseWithModel:(id)a0 request:(id)a1 error:(id)a2 startTime:(double)a3;
- (id)getChunk:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)post:(id)a0;
- (id)get:(id)a0;
- (id)request:(id)a0;

@end
