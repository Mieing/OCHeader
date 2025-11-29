@class QMapNetworkProcessorQueue, NSIndexSet, QMapNetworkDomainProxy, QFoundationDataSafetyRules, QMapNetworkSessionPool;

@interface QMapNetworkManager : NSObject

@property (retain, nonatomic) QMapNetworkSessionPool *sessionPool;
@property (copy, nonatomic) NSIndexSet *acceptableStatusCodes;
@property (retain) QMapNetworkProcessorQueue *processorQueue;
@property (retain) QMapNetworkDomainProxy *proxier;
@property (retain) QFoundationDataSafetyRules *dataSafetyRules;

+ (id)managerWithConnectionProxyDictionary:(id)a0;
+ (id)manager;

- (id)getNetworkErrorLocalizedDescription:(id)a0;
- (id)GET:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (id)GETRequest:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (id)POST:(id)a0 postBody:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (id)POSTRequest:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (void)onComplete:(id)a0 error:(id)a1 failure:(id /* block */)a2 request:(id)a3 response:(id)a4 success:(id /* block */)a5;
- (id)sendRequest:(id)a0 success:(id /* block */)a1 failure:(id /* block */)a2;
- (id)PUTRequest:(id)a0 fromData:(id)a1 orFromURL:(id)a2 success:(id /* block */)a3 failure:(id /* block */)a4;
- (void)replaceRequestURL:(id)a0 host:(id)a1 hostRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 request:(id)a3;
- (id)initWithConnectionProxyDictionary:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
