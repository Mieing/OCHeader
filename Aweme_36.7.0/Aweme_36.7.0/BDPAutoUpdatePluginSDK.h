@class NSString;

@interface BDPAutoUpdatePluginSDK : NSObject <BDPBootLifeCycleMessage, BDPAutoTestable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)pluginId:(id)a0 version:(id)a1 type:(unsigned int)a2 urls:(id)a3 localDebugInfo:(id *)a4 checksum:(id)a5;
+ (id)localDebugPluginInfo;
+ (BOOL)clearPlugin;
+ (id)pluginId:(id)a0 version:(id)a1 type:(unsigned int)a2 urls:(id)a3 localDebugInfo:(id *)a4;
+ (id)sharedInstance;

- (void)applicationFirstFrameDidShow:(id)a0;
- (BOOL)autoTestWithParam:(id)a0;
- (id)localDebugPluginInfo;
- (void)updateLocalPluginLocalStorageWithParam:(id)a0;
- (void)checkUserIsAvaliableToDebugPlugin:(id)a0 completion:(id /* block */)a1;

@end
