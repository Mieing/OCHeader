@class NSMutableDictionary, NSPointerArray, NSString, TIMXPBResponseLongConnectionCallback, NSObject, TIMXSDKInstance;
@protocol OS_dispatch_queue;

@interface TIMXOConversationReadReceipt : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXPBResponseLongConnectionCallback *longConnectCallback;
@property (nonatomic) double lastFetchTimestamp;
@property (nonatomic) BOOL hasAFetchTesk;
@property (retain, nonatomic) NSMutableDictionary *readyToRequestConIDToModelDict;
@property (retain, nonatomic) NSMutableDictionary *receivedGroupMessageReadCountDict;
@property (retain) NSPointerArray *callbacks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbacksQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_readReceiptQueue;
@property (nonatomic) double requestThrottle;
@property (nonatomic) long long convIDCacheLength;
@property BOOL featureEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadReadReceiptWithModels:(id)a0 requestFrom:(id)a1 completion:(id)a2;
- (void)addWeakReadReceiptCallbackFromServer:(id)a0;
- (void)p_async_on_handle_queue:(id /* block */)a0;
- (void)configLongConnectionResponse:(id)a0;
- (void)configResponse:(id)a0 requestModels:(id)a1 serverPushTrigger:(BOOL)a2 callback:(id)a3;
- (void)ABTestTriggerRequestFromServerPushWithRequestModels:(id)a0 requestTimeThrottle:(double)a1;
- (void)fetchReadIndexOfParticipantsWithRequestFrom:(id)a0 models:(id)a1 completion:(id /* block */)a2;
- (void)invokeCallbacksWithDict:(id)a0 serverPushTrigger:(BOOL)a1 callback:(id)a2;
- (void)triggerRequestFromServerPushWithRequestModels:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
