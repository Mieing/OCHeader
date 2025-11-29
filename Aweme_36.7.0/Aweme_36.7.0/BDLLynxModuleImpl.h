@class NSString, NSMapTable;

@interface BDLLynxModuleImpl : NSObject <BDPLynxBridgeLynxModuleObserverDelegate, BDLLynxModuleProtocol>

@property (retain) NSMapTable *contextModuleMap;
@property (retain) NSMapTable *contextConfigMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (Class)lynxModule;
- (void)updateModuleData:(id)a0 context:(id)a1;
- (void)loadBdpModule:(id)a0 withContext:(id)a1;
- (void)unloadBdpModule:(id)a0 withContext:(id)a1;
- (void)bdlynxUpdateTemplateConfig:(id)a0 context:(id)a1;
- (void)bdlynxUpdateStorage:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)versionString;
- (id)scriptPath;

@end
