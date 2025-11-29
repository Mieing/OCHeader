@interface BDPPluginClientAIStrategy : BDPBridgeInstancePlugin

- (void)getNativeFeaturesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getSnapshotWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)imageRiskCheckWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)imageUploadWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)runPitayaTaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)dispatchResultWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)logUsageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)textCheckWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)textMaskWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
