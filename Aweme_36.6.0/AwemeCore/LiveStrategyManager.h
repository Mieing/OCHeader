@class NSString;
@protocol LSPreconnInterface;

@interface LiveStrategyManager : NSObject <LiveIOStrategySDKObserver, LSPreconnProcotol>

@property (retain, nonatomic) id<LSPreconnInterface> preconnManager;
@property (nonatomic) BOOL inBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)executeCommand:(long long)a0 command:(long long)a1 hashCode:(long long)a2 info:(id)a3;
+ (id)executeCommandOpt:(long long)a0 command:(long long)a1 hashCode:(long long)a2 info:(id)a3;
+ (void)setNextRoomInfo:(id)a0 type:(long long)a1 arg:(long long)a2;
+ (void)start:(id)a0;
+ (id)sharedInstance;

- (void)setNextRoomInfo:(id)a0 type:(long long)a1 arg:(long long)a2;
- (void)registerNetworkNotification;
- (id)executeLiveIOCommand:(long long)a0 info:(id)a1;
- (void)setLiveIOObserver;
- (id)fireNotifyToPlayer:(id)a0 defaultValue:(id)a1 sessionId:(id)a2;
- (void)registerBackgroundStatus;
- (void)unregisterBackgroundStatus;
- (void)getBestIPForHost:(id)a0 callback:(id /* block */)a1;
- (void)preconnManager:(id)a0 resolvingDomain:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
