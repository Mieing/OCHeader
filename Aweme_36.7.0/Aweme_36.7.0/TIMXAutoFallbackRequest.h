@class NSString, TIMXSDKInstance, BFTask, NSNumber;
@protocol TIMXAutoFallbackPolicyProtocol;

@interface TIMXAutoFallbackRequest : NSObject <TIMXAutoFallbackRequestProtocol> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) id<TIMXAutoFallbackPolicyProtocol> fallbackPolicy;
@property int hasCalledCompletion;
@property (copy, nonatomic) id /* block */ successCompletionBlock;
@property (copy, nonatomic) id /* block */ successResponseCompletionBlock;
@property (copy, nonatomic) id /* block */ failureCompletionBlock;
@property (nonatomic) unsigned long long cachedBehaviourType;
@property (readonly, nonatomic) BOOL isDefaultTargetInstance;
@property (readonly, nonatomic) BOOL isDouYinTargetInstance;
@property (readonly, nonatomic) BOOL isECOMTargetInstance;
@property (nonatomic) unsigned int requestId;
@property (copy, nonatomic) id /* block */ httpPostMappingBlock;
@property (copy, nonatomic) id /* block */ wsPostMappingBlock;
@property (copy, nonatomic) id /* block */ wsStartBlock;
@property (copy, nonatomic) id /* block */ wsFinishBlock;
@property (retain, nonatomic) BFTask *dependency;
@property (nonatomic) unsigned long long triggerTag;
@property (nonatomic) BOOL isFromRetry;
@property (nonatomic) BOOL forceNoEncrypt;
@property (retain, nonatomic) NSNumber *priority;
@property (nonatomic) double sendTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldDowngradeRequestWithIsLongConnection:(BOOL)a0;
- (void)callSuccessBlockWithObject:(id)a0 response:(id)a1;
- (void)sendWSRequestWithCompletion:(id /* block */)a0;
- (void)sendHTTPRequestWithCompletion:(id /* block */)a0;
- (void)callFailureBlockWithError:(id)a0 errorObj:(id)a1;
- (id)p_generateFallbackPolicy;
- (void)sendOnce;
- (void)beforeErrorCompletion:(id)a0;
- (void)configureHTTPRequest:(id)a0;
- (void)callWSFinishBlockWithObject:(id)a0 error:(id)a1;
- (void)configureWSRequest:(id)a0;
- (void)callWSStartBlock;
- (id)errorInResponseObject:(id)a0;
- (void)trackAfterCallSuccessBlockWithObject:(id)a0;
- (void)trackAftercallFailureBlockWithError:(id)a0;
- (id)errorWithObject:(id)a0 error:(id)a1;
- (void)send;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
