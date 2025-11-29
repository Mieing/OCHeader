@class NSString, TIMXSDKInstance, NSError, NSMutableArray;
@protocol TIMXAutoFallbackRequestProtocol;

@interface TIMXAutoFallbackPolicy : NSObject <TIMXAutoFallbackPolicyProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) unsigned long long httpMaxTry;
@property (nonatomic) unsigned long long webSocketMaxTry;
@property (nonatomic) unsigned long long httpCurrentTry;
@property (nonatomic) unsigned long long webSocketCurrentTry;
@property (nonatomic) double retryDelay;
@property (nonatomic) double retryDelayMultiplier;
@property (nonatomic) double currentRetryDelay;
@property (nonatomic) int lastErrorType;
@property (retain, nonatomic) id<TIMXAutoFallbackRequestProtocol> request;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double httpTimeout;
@property (nonatomic) unsigned long long webSocketTimeout;
@property (nonatomic) BOOL forcedHTTP;
@property (retain, nonatomic) NSMutableArray *rtmMAry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetDelay;
- (void)_newStart;
- (void)p_start:(BOOL)a0;
- (BOOL)shouldSendWSRequest;
- (void)triggerErrorHandle;
- (void)triggerWSRequestSend;
- (BOOL)shouldSendHTTPRequest;
- (void)triggerHTTPRequestSend;
- (double)getCurrentTimeInterval;
- (void)statisticWithResponse:(id)a0 start:(double)a1 end:(double)a2;
- (void)wsFailedWithError:(id)a0;
- (id)headersFromObj:(id)a0 error:(id)a1;
- (void)trackEncryptResultWithObj:(id)a0 error:(id)a1 headers:(id)a2;
- (void)httpFailedWithError:(id)a0 headers:(id)a1;
- (void)httpFailedWithError:(id)a0;
- (BOOL)shouldContinueWithError:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (id)initWithRootObject:(id)a0;

@end
