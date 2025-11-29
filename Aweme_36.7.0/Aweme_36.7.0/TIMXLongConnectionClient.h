@class NSSet, NSPointerArray, NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, TIMXLongConnectionClientUnderlayingWebSocket, TIMXLongConnectionServerErrorCheckProtocol;

@interface TIMXLongConnectionClient : NSObject <TIMXWebSocketReceiver, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain) NSPointerArray *callbacks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messagingQueue;
@property (retain, nonatomic) id<TIMXLongConnectionServerErrorCheckProtocol> check;
@property (nonatomic) BOOL enableMeasureCallbackElapsedTime;
@property (copy, nonatomic) NSSet *businessNameBlackList;
@property (copy, nonatomic) NSSet *businessNameWhiteList;
@property (nonatomic) long long thresholdDuration;
@property (nonatomic) BOOL enableMeasureAllBusiness;
@property (retain, nonatomic) id<TIMXLongConnectionClientUnderlayingWebSocket> webSocket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleLongConnectionStateChange:(unsigned long long)a0;
- (void)addWeakCallback:(id)a0;
- (BOOL)checkElapsedTime:(double)a0;
- (void)updateConnection;
- (void)measureElapsedTimeWithReceiveTimestamp:(double)a0 logId:(unsigned long long)a1;
- (void)handlePushMessageObjectV2:(id)a0;
- (void)notifyWillHandleMessageWithCallbacks:(id)a0 message:(id)a1;
- (id)postProcessMappingBlockResult:(id)a0 originalMessage:(id)a1;
- (void)notifyHandleMessageWithCallbacks:(id)a0 message:(id)a1;
- (void)trackProcessIfNeededWithProcessMonitor:(id)a0 callback:(id)a1;
- (long long)conditionCheckWithBusinessClassName:(id)a0 elapsedTime:(long long)a1;
- (BOOL)shouldTrackCurrentCallViaPVSampling;
- (BOOL)checkConditionWithbusinessClassName:(id)a0;
- (void)handlePushMessageObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)enqueueRequest:(id)a0;
- (BOOL)serverError;
- (id)initWithRootObject:(id)a0;
- (void)receiveMessage:(id)a0;

@end
