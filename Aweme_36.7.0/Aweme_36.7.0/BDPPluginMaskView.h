@interface BDPPluginMaskView : BDPBridgeInstancePlugin

- (id)findMaskViewInView:(id)a0 viewID:(unsigned long long)a1;
- (BOOL)removeMaskViewInView:(id)a0 viewID:(unsigned long long)a1;
- (void)insertMaskViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateMaskViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeMaskViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
