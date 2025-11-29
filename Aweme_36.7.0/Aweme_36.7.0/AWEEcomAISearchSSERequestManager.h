@class AWEEcomAISearchSSEDataFetcher, NSString, NSDictionary, AWEEcomAISearchSSERequestConfig, AWEEcomAISearchSSERequestRetryInfo;
@protocol AWEEcomAISearchSSERequestManagerDelegate;

@interface AWEEcomAISearchSSERequestManager : NSObject <AWEEcomAISearchSSEDataReceiver>

@property (retain, nonatomic) AWEEcomAISearchSSEDataFetcher *dataFetcher;
@property (copy, nonatomic) NSString *requestUrl;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) BOOL isCurrentRequestEnd;
@property (copy, nonatomic) NSDictionary *lastResponse;
@property (retain, nonatomic) AWEEcomAISearchSSERequestRetryInfo *delayRetryInfo;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) AWEEcomAISearchSSERequestConfig *requestConfig;
@property (weak, nonatomic) id<AWEEcomAISearchSSERequestManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveEndSymbol;
- (void)didReceiveDictionary:(id)a0;
- (void)startRequestWithParams:(id)a0;
- (void)didReceiveFirstDataChunk;
- (void)didEstablishLink:(BOOL)a0;
- (void)didBreakLink:(long long)a0 withError:(id)a1 withCurrentResponse:(id)a2;
- (void)setupRequestConfig;
- (void)networkConnectionChanged:(id)a0;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 isRetry:(BOOL)a3;
- (void)logForFinalError:(id)a0 imprId:(id)a1 reason:(long long)a2;
- (void)endForReason:(long long)a0 withError:(id)a1;
- (void)executeDelayRetry;
- (void)logForRetry:(long long)a0 imprId:(id)a1 reason:(long long)a2 error:(id)a3;
- (void)logForDelayRetry:(id)a0;
- (void)retryRequest:(id)a0 reason:(long long)a1 error:(id)a2 isDelayRetry:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isNetworkReachable;
- (void)cancelCurrentRequest;

@end
