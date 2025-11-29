@class NSMutableDictionary;
@protocol IESGCPMonitor;

@interface IESGCPApi : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestPool;
@property (retain, nonatomic) id<IESGCPMonitor> monitor;

- (id)p_requestPBWith:(id)a0 method:(long long)a1;
- (id)get:(id)a0 retryCount:(long long)a1;
- (id)tintTagsToHeaders:(id)a0 tintTags:(id)a1;
- (void)request:(id)a0 finishedWithError:(id)a1;
- (void)onRequest:(id)a0 finishedWithJsonObj:(id)a1;
- (void)trackCommonApiErrorMonitorWithModel:(id)a0 duration:(double)a1;
- (id)get:(id)a0 retryCount:(long long)a1 complete:(id /* block */)a2;
- (id)urlWithRequest:(id)a0;
- (id)netflowJoint:(id)a0;
- (id)convertParamKeysIfNeedWithParams:(id)a0;
- (id)postForJSON:(id)a0;
- (void)p_trackPBExceptionWithRequest:(id)a0 exception:(id)a1;
- (id)request:(id)a0 retryCount:(long long)a1;
- (id)p_request:(id)a0 retryCount:(long long)a1;
- (void)request:(id)a0 finishedWithResponse:(id)a1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)post:(id)a0;
- (id)get:(id)a0;
- (id)request:(id)a0;

@end
