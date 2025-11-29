@class NSString, NSMutableArray, NSMutableDictionary;
@protocol IESECLiveSubscription;

@interface IESECLiveEnterRoomWidget : IESECLiveBaseWidget <IESECLiveEventPlugin>

@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) id<IESECLiveSubscription> pipDisposable;
@property (nonatomic) BOOL appearedOrFirstCreate;
@property (nonatomic) BOOL subscribed;
@property (nonatomic) BOOL needBackToStream;
@property (nonatomic) BOOL hasClearScreen;
@property (retain, nonatomic) NSMutableDictionary *existedPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backToRoomAction;
- (void)widgetDidCreate;
- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)widgetDidAppear;
- (void)widgetMount;
- (void)widgetUnmount;
- (void)widgetRefresh;
- (void)widgetDidDisappear;
- (void)receive:(id)a0;
- (id)consumedEventsSet;
- (BOOL)dispatchInBackgroundThread;
- (void)handleEnterDetail:(id)a0;
- (void)handleQuitDetail:(id)a0;
- (void)handleEnterOrderWithParams:(id)a0;
- (void)handleQuitOrderWithParams:(id)a0;
- (void)handleLiveSKUStatusWithParams:(id)a0;
- (void)enterLiveSKUViewWithParams:(id)a0;
- (void)quitLiveSKUViewWithParams:(id)a0;
- (void)checkNeedBackToPrestream;
- (BOOL)needClearLivePendant;
- (void)reverseClearScreen;
- (void)subscrbeXBridgeEvent:(id)a0 callback:(id /* block */)a1;
- (void)handleEnterMatchPurchase:(id)a0;
- (void)handleQuitMatchPurchase:(id)a0;
- (void)enterWithUUID:(id)a0 scene:(long long)a1;
- (void)quitWithUUID:(id)a0 scene:(long long)a1;
- (void)tryBackToPrestream;
- (void).cxx_destruct;
- (void)unsubscribe;
- (void)subscribe;
- (void)clearScreen;

@end
