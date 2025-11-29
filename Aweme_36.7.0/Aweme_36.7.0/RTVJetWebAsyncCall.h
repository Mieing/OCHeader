@class NSMutableDictionary, RTVRetayableJetWebSocketClient, RTVJetRetryableHttpWebAccess, NSString;
@protocol RxInjector, RTVJetConfigManagerInterface;

@interface RTVJetWebAsyncCall : NSObject <RTVJetRequestRetryObserverProtocol> {
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _lock;
}

@property (nonatomic) unsigned long long currentRetryCount;
@property (readonly, nonatomic) NSMutableDictionary *timedDictionary;
@property (readonly, nonatomic) id<RTVJetConfigManagerInterface> configManager;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVJetRetryableHttpWebAccess *httpWebAccess;
@property (readonly, nonatomic) RTVRetayableJetWebSocketClient *webSocketClient;
@property (nonatomic) int service;
@property (copy, nonatomic) NSString *skdVersion;
@property (nonatomic) unsigned long long httpMaxTry;
@property (nonatomic) unsigned long long webSocketMaxTry;
@property (nonatomic) double backoffDuration;
@property (readonly, copy, nonatomic) NSString *businessTag;
@property (readonly, copy, nonatomic) NSString *apiName;
@property (readonly, nonatomic) int method;
@property (retain, nonatomic) id messageObject;
@property (readonly, copy, nonatomic) NSString *requestID;
@property (nonatomic) double webSocketTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)__monitorErrorInfoWithError:(id)a0;
- (id)initWithApiName:(id)a0 service:(int)a1 method:(int)a2 messageObject:(id)a3 businessTag:(id)a4;
- (id)sendWithWebSocket;
- (id)sendWithHttp;
- (void)urlRequestWillStart:(id)a0 retryWithTimes:(unsigned long long)a1;
- (void)urlRequestDidCompletion:(id)a0 retryTimes:(unsigned long long)a1 response:(id)a2 error:(id)a3;
- (void)configCall:(id)a0;
- (void)__storeStartTimeForMarker:(id)a0;
- (long long)__queryCostTimeForMarker:(id)a0;
- (void)__trackRequestWithDuration:(long long)a0 response:(id)a1 error:(id)a2;
- (id)__generateSequenceID;
- (id)__timeMarkerWithRetryTimes:(unsigned long long)a0 requestType:(long long)a1;
- (void)__monitorService:(id)a0 metric:(id)a1 category:(id)a2;
- (void)wsRequestWillStart:(id)a0 retryWithTimes:(unsigned long long)a1;
- (void)wsRequestDidCompletion:(id)a0 retryTimes:(unsigned long long)a1 response:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (id)execute;
- (id).cxx_construct;

@end
