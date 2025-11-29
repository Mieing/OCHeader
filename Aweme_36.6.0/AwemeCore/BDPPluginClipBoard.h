@interface BDPPluginClipBoard : BDPBridgeInstancePlugin

- (void)setClipboardDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getClipboardDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
