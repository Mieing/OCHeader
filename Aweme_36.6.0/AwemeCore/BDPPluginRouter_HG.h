@class NSString, BDPUniqueID;

@interface BDPPluginRouter_HG : BDPBridgeInstancePlugin <BDPAppInterfaceOrientationChangeMessage>

@property (copy, nonatomic) id /* block */ delayAction;
@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkSchemaHostValid:(id)a0 uniqueID:(id)a1;
+ (BOOL)checkSchemaAppIDValid:(id)a0 uniqueID:(id)a1;
+ (id)URLByAddEntranceInfoFromOriginURL:(id)a0 currentSchema:(id)a1;
+ (BOOL)openSchemaWithURL:(id)a0 uniqueID:(id)a1 param:(id)a2;

- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)openSchemaWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)openInnerSchemaWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)navigateToVideoViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)callbackSceneInaccessible:(id /* block */)a0 scene:(id)a1;
- (void)p_trackWithScene:(id)a0 params:(id)a1 uniqueID:(id)a2;
- (void)checkSceneWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)navigateToSceneWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
