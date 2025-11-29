@class NSString, AWEECCpsTrackerConfigManager, NSMutableArray, NSNumber;

@interface AWEECCpsTrackRequest : NSObject

@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) AWEECCpsTrackerConfigManager *config;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSMutableArray *lackedParams;
@property (retain, nonatomic) NSMutableArray *lackedParamsInUrl;
@property (retain, nonatomic) NSMutableArray *invalidParams;
@property (retain, nonatomic) NSNumber *requestTs;

- (BOOL)validateParams:(id)a0;
- (void)requestWithUrl:(id)a0 fromSource:(unsigned long long)a1 useNewWay:(BOOL)a2;
- (void)requestWithParams:(id)a0 fromSource:(unsigned long long)a1;
- (void)requestWithParams:(id)a0 fromSource:(unsigned long long)a1 complete:(id /* block */)a2;
- (id)paramsFromUrl:(id)a0;
- (void)logInvalidEventWithSource:(unsigned long long)a0 url:(id)a1 params:(id)a2;
- (id)addCommonParams:(id)a0 source:(unsigned long long)a1;
- (void)p_requestWithParams:(id)a0;
- (void)requestWithUrl:(id)a0;
- (void)p_requestWithParams:(id)a0 complete:(id /* block */)a1;
- (void)requestWithParams:(id)a0 complete:(id /* block */)a1;
- (void)requestWithParams:(id)a0 retry:(long long)a1 complete:(id /* block */)a2;
- (id)createAWERequestWithParams:(id)a0 complete:(id /* block */)a1;
- (void)requestWithParams:(id)a0 retry:(long long)a1 creator:(id /* block */)a2 complete:(id /* block */)a3;
- (void)logRetryEventWithError:(id)a0;
- (void).cxx_destruct;

@end
