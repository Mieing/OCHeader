@class NSTimer, NSString, UIView, SRWebSocket, BDPConnectionStatusWindow, BDPUniqueID, NSMutableDictionary, NSObject, NSMutableArray, BDPPromise, UILabel;
@protocol OS_dispatch_queue, BDPBusinessMonitorProtocol;

@interface BDPGameDeveloperPerformanceTester : NSObject <SRWebSocketDelegate, BTDSimplePingDelegate, BDPBootLifeCycleMessage, BDPCommonActiveChangeMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *roomServerURLString;
@property (retain, nonatomic) SRWebSocket *socket;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *uniqueTimeID;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL countDownSwitch;
@property (nonatomic) BOOL isConnected;
@property (retain, nonatomic) NSString *routeID;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) BDPConnectionStatusWindow *connectionStatusWindow;
@property (retain, nonatomic) UILabel *connectionStatusText;
@property (retain, nonatomic) UILabel *connectionStatusPoint;
@property (retain, nonatomic) NSMutableDictionary *networkMapping;
@property (retain, nonatomic) id<BDPBusinessMonitorProtocol> monitor;
@property (nonatomic) BOOL hasReceivedTrust;
@property (nonatomic) long long endType;
@property (retain, nonatomic) BDPPromise *detectionPromise;
@property (retain, nonatomic) BDPPromise *monitorPromise;
@property (nonatomic) BOOL currentEnablePerformanceMonitor;
@property (retain, nonatomic) NSMutableArray *pendingMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removePerformanceTest;
+ (void)setPerformanceTestWithUniqueID:(id)a0 schema:(id)a1;
+ (void)sendPerformanceToIDEWithUniqueID:(id)a0 eventName:(id)a1 extraParams:(id)a2 timestamp:(long long)a3;
+ (void)networkEvent:(id)a0 uniqueID:(id)a1 extraParams:(id)a2 isInnerRequest:(BOOL)a3;

- (void)webSocket:(id)a0 didReceiveMessage:(id)a1;
- (void)webSocketDidOpen:(id)a0;
- (void)webSocket:(id)a0 didFailWithError:(id)a1;
- (void)webSocket:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (void)hookEvents;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)commonBecomeActive:(BOOL)a0 forUniqueID:(id)a1;
- (void)changeConnectionStatusTextIfNeed:(id)a0 pointColor:(id)a1;
- (id)initWithUniqueID:(id)a0 schema:(id)a1;
- (void)sendPerformanceToIDEWithEventName:(id)a0 extraParams:(id)a1 timestamp:(long long)a2;
- (void)networkEvent:(id)a0 uniqueID:(id)a1 extraParams:(id)a2;
- (id)addIDToIDEServerURL:(id)a0;
- (void)handleGameFirstFrameDidDraw:(id)a0;
- (void)handleGameException:(id)a0;
- (void)sendDefaultPerformanceToIDEWithParam:(id)a0 extraParam:(id)a1;
- (void)sendDefaultPerformanceToIDEWithParam:(id)a0;
- (long long)getMainPackageSize:(id)a0;
- (void)sendEndTestToIDE;
- (void)sendAppOnlineToIDE;
- (void)sendPingToIDE;
- (void)sendRouteStartToIDE;
- (void)sendMessageWithMethod:(id)a0 params:(id)a1;
- (void)blankDetection;
- (void)sendWithMessage:(id)a0;
- (void)sendAppCloseToIDE;
- (void)setPromise;
- (void)addSubviewToContainerVC:(BOOL)a0;
- (void)setupWebViewMonitor:(id)a0;
- (void)setGameMonitor:(id)a0;
- (void)pr_networkEvent:(id)a0 uniqueID:(id)a1 extraParams:(id)a2 timestamp:(long long)a3;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)invalidateTimer;
- (void)dealloc;
- (id)getCurrentTime;

@end
