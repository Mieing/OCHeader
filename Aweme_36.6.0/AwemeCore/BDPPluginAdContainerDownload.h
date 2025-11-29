@interface BDPPluginAdContainerDownload : BDPBridgeInstancePlugin

+ (unsigned long long)pluginMode;

- (id)eventTagForUniqueId:(id)a0;
- (void)openWithURL:(id)a0 eventTag:(id)a1 eventParam:(id)a2 callback:(id /* block */)a3;
- (void)openSchemaWithURL:(id)a0 eventTag:(id)a1 eventParam:(id)a2 callback:(id /* block */)a3 appId:(id)a4;
- (void)eventV1WithParam:(id)a0 label:(id)a1 tag:(id)a2;
- (id)eventTagForModel:(id)a0;
- (void)openAdLandPageLinksWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
