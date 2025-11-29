@interface BDPPluginVideoPicker : BDPBridgeInstancePlugin

- (id)generateModelWithParam:(id)a0;
- (id)scopeListWithSourceType:(long long)a0;
- (void)p_traceAwemeVideoPickerResultWithUniqueID:(id)a0 result:(id)a1;
- (void)chooseVideoWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)invokeAwemeCameraContainerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
