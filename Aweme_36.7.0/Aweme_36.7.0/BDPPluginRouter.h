@interface BDPPluginRouter : BDPBridgeInstancePlugin

+ (BOOL)checkSchemaHostValid:(id)a0 uniqueID:(id)a1;
+ (BOOL)checkSchemaAppIDValid:(id)a0 uniqueID:(id)a1;
+ (id)URLByAddEntranceInfoFromOriginURL:(id)a0 currentSchema:(id)a1;
+ (BOOL)openSchemaWithURL:(id)a0 uniqueID:(id)a1 param:(id)a2 error:(id *)a3;
+ (id)tryAddIMParams:(id)a0 uniqueID:(id)a1;

- (void)openSchemaWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (BOOL)checkResponseDataVaild:(id)a0 error:(id *)a1;
- (BOOL)checkData:(id)a0 error:(id *)a1;
- (void)openInnerSchemaWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)requestSafariWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)navigateToVideoViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)invokeIMContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)invokePlatformIMContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getPageStackWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
