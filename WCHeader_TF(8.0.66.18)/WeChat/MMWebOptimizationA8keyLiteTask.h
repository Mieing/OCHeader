@class NSMutableSet, MMWebOptimizationA8keyLiteTaskRequest;

@interface MMWebOptimizationA8keyLiteTask : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) MMWebOptimizationA8keyLiteTaskRequest *request;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSMutableSet *setA8keyLiteRequestingUrlString;
@property (nonatomic) BOOL isCancel;

+ (unsigned int)generateSendSequence;
+ (id)netTypeString;

- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)start;
- (void)cancel;
- (BOOL)isInRequestingWithUrlString:(id)a0;
- (void)mainThread_callBackFailWithResult:(id)a0;
- (void)mainThread_callBackSuccessWithResult:(id)a0;
- (void)processGetA8KeyLiteResponseFailWithRequestId2Params:(id)a0;
- (void)processGetA8KeyLiteResponse:(id)a0 requestId2Params:(id)a1;
- (id)parseDomainControlDataFromResponse:(id)a0;
- (id)parseUrlControlDataFromResponse:(id)a0 requestId2Params:(id)a1;
- (id)parsePrefetchDomainInfoFromResponse:(id)a0 requestId2Params:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onResponseGetA8KeyLite:(id)a0;
- (void).cxx_destruct;

@end
