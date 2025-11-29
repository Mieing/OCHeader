@class HMDTTMonitor, NSMapTable, BDMannorConfiguration;

@interface BDMannor : NSObject

@property (retain, nonatomic) NSMapTable *weakTable;
@property (retain, nonatomic) BDMannorConfiguration *config;
@property (retain, nonatomic) HMDTTMonitor *monitor;

+ (id)adTrackHandler;
+ (id)weakObjectKeyWith:(id)a0 requestID:(id)a1 logExtra:(id)a2;
+ (void)registerATM;
+ (id)SDKAppID;
+ (void)setupDebugLabelOnView:(id)a0;
+ (id)hostCommonCapabilityHandler;
+ (id)routerHandler;
+ (id)saasConfigHandler;
+ (id)getAppInfoHandler;
+ (id)requestHandler;
+ (id)sharedInstance;
+ (id)downloadHandler;

- (void)setWeakObject:(id)a0 forKey:(id)a1;
- (id)weakObjectForKey:(id)a0;
- (void)removeWeakObjectForKey:(id)a0;
- (void)registerMannorWithConfigHanler:(id /* block */)a0;
- (void)resiterSlardarMonitor;
- (void).cxx_destruct;
- (id)init;

@end
