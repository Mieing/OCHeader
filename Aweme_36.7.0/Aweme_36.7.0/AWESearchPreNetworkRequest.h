@class NSString, NSDictionary, AWENetworkRequest, NSError, AWESearchPreNetworkContext;

@interface AWESearchPreNetworkRequest : NSObject

@property (nonatomic) BOOL pf_isPredictFecth;
@property (nonatomic) BOOL pf_didSendPassivePreRequest;
@property (nonatomic) BOOL pf_isPassivePredictFetch;
@property (retain, nonatomic) NSDictionary *pf_predictFetchParams;
@property (copy, nonatomic) NSString *pf_predictID;
@property (retain, nonatomic) AWESearchPreNetworkContext *requestContext;
@property (nonatomic) unsigned long long ackCountdownTime;
@property (copy, nonatomic) id /* block */ ackTimerActionBlock;
@property (nonatomic) unsigned long long preInitTimeout;
@property (copy, nonatomic) id /* block */ preInitTimeoutTimerActionBlock;
@property (retain, nonatomic) AWENetworkRequest *realRequest;
@property (nonatomic) unsigned long long preRequestState;
@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL isFlowRequest;
@property (nonatomic) BOOL isFlowLite;
@property (nonatomic) BOOL isCommonFlowRequest;
@property (copy, nonatomic) NSDictionary *headerField;
@property (retain, nonatomic) Class modelClass;
@property (copy, nonatomic) id /* block */ responseBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id responseModel;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) id completionModel;
@property (retain, nonatomic) NSError *completionError;
@property (nonatomic) double initTaskTimestamp;
@property (nonatomic) double receiveRawResponseTimestamp;
@property (nonatomic) double receiveRespModelTimestamp;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL highThreadPriority;
@property (nonatomic) double defaultThreadPriority;
@property (nonatomic) BOOL highRequestMethodPriority;
@property (nonatomic) unsigned long long requestMode;
@property (copy, nonatomic) NSString *prefetchType;
@property (nonatomic) BOOL removeChunkStateMachineAfterPreRequest;
@property (nonatomic) BOOL neverExpire;
@property (copy, nonatomic) id /* block */ startNewStreamBlock;

+ (id)compareParams:(id)a0 withParams:(id)a1;
+ (id)createPreRequestWithBlock:(id /* block */)a0;
+ (long long)timeOutDurationWithPrefetchType:(id)a0 searchSource:(id)a1 isServer:(BOOL)a2;
+ (long long)searchPredictRequestAckTimeoutConfigWithPrefetchType:(id)a0 searchSource:(id)a1 isServer:(BOOL)a2;
+ (BOOL)isExpirePreRequest:(id)a0;

- (id)ackTimer;
- (void)onAckTimerAction;
- (void)setAckTimer:(id)a0;
- (id)preInitTimeoutTimer;
- (void)onPreInitTimeoutTimerAction;
- (void)setPreInitTimeoutTimer:(id)a0;
- (void)startACKTimerIfNeed;
- (void)stopAckTimerIfNeed;
- (void)startPreInitTimeoutTimerIfNeed;
- (void)stopPreInitTimeoutTimerIfNeed;
- (void).cxx_destruct;

@end
