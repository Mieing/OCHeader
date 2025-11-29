@class NSString, NSMutableArray;
@protocol IESLivePiperProtocol;

@interface AWELiveCommerceJSBridgeHandler : NSObject <IESLivePiperHandlerProtocol>

@property (weak, nonatomic) id<IESLivePiperProtocol> bridge;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (void)handleAppStoreDismissNoti:(id)a0;
- (void)unregisterSubscriber;
- (void)removeObserverNotification;
- (void)addObserverNotification;
- (void)registerSubscribes;
- (id /* block */)preload_app_adCallHandler;
- (id /* block */)download_clickCallHandler;
- (id /* block */)openAdLiveLandingPageCallHandler;
- (id /* block */)ext_webcast_getLiveRoomInfoCallHandler;
- (void)registerOnCapsuleTextUpdate;
- (id)buildOpenAppStoreDictWithJSBResult:(id)a0;
- (id)checkisAdsFlow:(id)a0;
- (void)invokeCloseAppStore;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
