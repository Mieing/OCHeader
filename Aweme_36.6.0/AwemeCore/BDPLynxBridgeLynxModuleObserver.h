@protocol BDPLynxBridgeLynxModuleObserverDelegate;

@interface BDPLynxBridgeLynxModuleObserver : NSObject

@property (weak, nonatomic) id<BDPLynxBridgeLynxModuleObserverDelegate> delegate;

+ (id)sharedInstance;

- (void)loadBdpBridgeLynxModule:(id)a0;
- (void)unloadBdpBridgeLynxModule:(id)a0;
- (void).cxx_destruct;

@end
